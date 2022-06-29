#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "note.h"
#include <QtDebug>
#include <QTime>
#include <QCryptographicHash>//计算hash值的类
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QList>
#include <QtGlobal>
#include <cstdlib>
#include <ctime>
#include <QRandomGenerator>
#include <QWidget>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include<QToolBar>
#include <QFont>
#include <QFontDialog>

static QStringList CNLevelParam[3]={{"zh","en","de","zh"},
                                  {"zh","en","de","jp","spa","zh"},
                                  {"zh","en","de","jp","spa","it","pl","bul","zh"}};
//中文降重

static QStringList ENLevelParam[3]={{"en","zh","de","en"},
                                  {"en","zh","de","jp","spa","en"},
                                  {"en","zh","de","jp","spa","it","pl","bul","en"}};
//英语降重

static QString AppID = "20220425001190113";
static QString Key = "OeQMX7XjULwzgiJV5BNn";
static QString Url = "http://api.fanyi.baidu.com/api/trans/vip/translate";

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
    ,ui(new Ui::MainWindow)
    ,m_sourceType("auto")
    ,m_transResultType("zh")
    ,m_thesisMode(false)
    ,m_transLevel(0)
{
    ui->setupUi(this);
    m_naManager = new QNetworkAccessManager(this);
    setWindowTitle("DicTranslator");     //设置窗口标题
    setFixedSize(800,600);               //设置窗口大小
    ui->label_Level->hide();             //翻译模式下隐藏降重等级
    ui->comboBox_Level->hide();
    ui->actionChinese->setChecked(true);
    ui->textEdit_input->setPlaceholderText("请输入文字：(Please input:)");
    ui->textEdit_output->setPlaceholderText("翻译结果");
    this->setWindowIcon(QIcon(":/ima/image/dt2.png"));
    //生成窗口图标

    ui->actionUnderline->setCheckable(true);
    ui->actionBold->setCheckable(true);
    ui->actionItalic->setCheckable(true);
    connect(ui->actionNew, &QAction::triggered, this, &MainWindow::newDocument);
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::open);
    connect(ui->actionSave, &QAction::triggered, this, &MainWindow::on_pushButton_save_clicked);
    connect(ui->actionSave_as, &QAction::triggered, this, &MainWindow::save_As);
    connect(ui->actionPrint, &QAction::triggered, this, &MainWindow::print);
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::exit);
    connect(ui->actionCopy, &QAction::triggered, this, &MainWindow::copy);
    connect(ui->actionCut, &QAction::triggered, this, &MainWindow::cut);
    connect(ui->actionPaste, &QAction::triggered, this, &MainWindow::paste);
    connect(ui->actionUndo, &QAction::triggered, this, &MainWindow::undo);
    connect(ui->actionRedo, &QAction::triggered, this,&MainWindow::redo);
    connect(ui->actionFont, &QAction::triggered, this, &MainWindow::selectFont);
    connect(ui->actionBold, &QAction::triggered, this, &MainWindow::setFontBold);
    connect(ui->actionUnderline, &QAction::triggered, this,&MainWindow::setFontUnderline);
    connect(ui->actionItalic, &QAction::triggered, this, &MainWindow::setFontItalic);
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::about);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getHashData(QString input){
    QByteArray hashData = QCryptographicHash::hash(input.toUtf8(),QCryptographicHash::Md5);
    return QString(hashData.toHex());
}

QString MainWindow::getSplicingData(QString inputStr){

    QRandomGenerator * qr = new QRandomGenerator();
    QString strSalt = QString::number(qr->bounded(0,RAND_MAX)%1000);
    //生成一个随机数
    return QString("%1?q=%2&from=%3&to=%4&appid=%5&salt=%6&sign=%7")
            .arg(Url)
            .arg(inputStr)
            .arg(m_sourceType)
            .arg(m_transResultType)
            .arg(AppID)
            .arg(strSalt)
            .arg(getHashData(AppID+inputStr+strSalt+Key));

}

QString MainWindow::getSyncData(const QString &strUrl)
{
    assert(!strUrl.isEmpty());
    //传入一个地址并转换为QUrl格式
    const QUrl url = QUrl::fromUserInput(strUrl);
    assert(url.isValid());

    QNetworkRequest request(url);
    QNetworkReply* reply = m_naManager->get(request); //m_naManager是QNetworkAccessManager对象

    //如下为 同步获取服务器响应 阻塞函数
    QEventLoop eventLoop;
    connect(reply, &QNetworkReply::finished, &eventLoop, &QEventLoop::quit);
    eventLoop.exec(QEventLoop::ExcludeUserInputEvents);

    // 获取http状态码
    QVariant statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    if(statusCode.isValid())
        qDebug() << "status code=" << statusCode.toInt();

    QVariant reason = reply->attribute(QNetworkRequest::HttpReasonPhraseAttribute).toString();
    if(reason.isValid())
        qDebug() << "reason=" << reason.toString();

    QNetworkReply::NetworkError err = reply->error();
    if(err != QNetworkReply::NoError) {
        qDebug() << "Failed: " << reply->errorString();
    }else{
        // 获取返回内容，并全部读取出存到retStr中
        QByteArray replyData = reply->readAll();
        // qDebug() <<replyData;

        //下面为针对百度api返回的json格式进行解析
        //e.g  {"from":"en","to":"zh","trans_result":[{"src":"apple","dst":"苹果"}]}
        // 第一步 将QString类型转为QJsonObject类型

        QJsonObject obj =   QStringToJson(replyData.toStdString().c_str());

        // 第二步 获取到trans_result对应字段后将其按数组取出（实际上只有一个）所以为.at(0)并返回Json对象

        QJsonObject obj2 = obj.value("trans_result").toArray().at(0).toObject();

        //针对错误API进行的处理: 判断返回数据是否异常并将异常输出到输出框
        if(obj2.isEmpty()){
            m_transResult=replyData;
        }else{
        // 第三步 将获取到的Json对象 取出dst 对应字段经转换后存入 m_transResult
            m_transResult = obj2.value("dst").toString();
        }
    }

    reply->deleteLater();
    reply = nullptr;
    return m_transResult;
}


void MainWindow::on_pushButton_translate_clicked()
{
    //从文本框获取输入数据
    QString inputStr=ui->textEdit_input->toPlainText().toUtf8();
    //BUG： 解决输入字符跨行后 只翻译第一行的问题
    inputStr.replace(QString("\n"),QString(""));
    qDebug() << inputStr ;
    //判断为翻译模式还是论文模式
    // 翻译模式 为直接翻译成指定的语言，翻译次数一次
    // 论文模式 按照指定的翻译模式翻译，翻译次数为多次
    if(!m_thesisMode){
        qDebug()<<"当前为翻译模式";
        m_transResult = getSyncData(getSplicingData(inputStr));
    }else{
        //去重原理
        //初级 中->英->德->中
        //中级 中->英->德->日->西班牙->中
        //高级 中->英->德->日->西班牙->意大利->波兰->保加利亚->中
        // 中  英 德 日 西班牙 意大利 波兰 保加利亚
        // zh en de jp spa   it    pl  bul
        qDebug()<<"当前为论文模式";
        // 获取指定的翻译模式中的参数
        QStringList currLevelParam;
        if(ui->actionEnglish->isChecked()){
           currLevelParam = ENLevelParam[m_transLevel];
        }
        else{
        currLevelParam = CNLevelParam[m_transLevel];
        }
        // 遍历指定的翻译模式中的参数并将数据按照指定参数翻译
        // -1的原因是 最后一次肯定是其他语言翻译成中文，后续i + 1 为最后一个参数，所以最后一次翻译为i - 1次才能保证数据访问不会越界
        for(int i = 0;i < currLevelParam.size() -1; i++){
            // 给源语言类型 赋值
            m_sourceType = currLevelParam.at(i);
            // 给目的语言类型 赋值
            m_transResultType = currLevelParam.at(i+1);

            // 判断是否为首次转换，首次转换时数据从文本框输入，后续翻译时，数据为上一次生成数据结果
            if(ui->actionEnglish->isChecked()){
             ui->textEdit_output->setPlainText("Reducing, please wait...");
            }
            else{
             ui->textEdit_output->setPlainText("正在降重中，请稍候。。。");
            }
            for(int count = 0; count < INT_MAX;++count){

            }
            //避免Invalid Access Limit

            if(i == 0){
                m_transResult = getSyncData(getSplicingData(inputStr));
            }else{
                m_transResult = getSyncData(getSplicingData(m_transResult));
            }
            qDebug() << m_sourceType <<"->"<<m_transResultType<<" : "<<m_transResult;
        }
    }
    // 更新结果显示
    updateResult();
}
void MainWindow::updateResult(){
    ui->textEdit_output->setPlainText(m_transResult);
    qDebug()<< m_transResult;
}




void MainWindow::on_comboBox_Level_activated(int index)
{
   m_transLevel = index;
}


void MainWindow::on_comboBox_target_currentIndexChanged(int index)
{
    QString Langs[7] = {"zh","en","fra","de","jp","kor","spa"};
    //目标语种列表
    m_transResultType=Langs[index];
}


void MainWindow::on_radioButton_clicked(bool checked)
{
    m_thesisMode = checked;
    if(checked){
 //将界面转成论文模式
    ui->label_origin->hide();
    ui->comboBox_origin->hide();
    ui->label_target->hide();
    ui->comboBox_target->hide();
    ui->pushButton_change->hide();
    ui->label_Level->show();
    ui->comboBox_Level->show();
        if(ui->actionEnglish->isChecked()){
            ui->pushButton_translate->setText("Reduce");
        }
        else{
             ui->pushButton_translate->setText("降重");
        }
    }
    else{
  //将界面转成翻译模式
        ui->label_origin->show();
        ui->comboBox_origin->show();
        ui->label_target->show();
        ui->comboBox_target->show();
        ui->pushButton_change->show();
        ui->label_Level->hide();
        ui->comboBox_Level->hide();
        if(ui->actionEnglish->isChecked()){
            ui->pushButton_translate->setText("Translate");
        }
        else{
              ui->pushButton_translate->setText("翻译");
        }
    }
}

QJsonObject QStringToJson(QString jsonString)
{
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonString.toLocal8Bit().data());
    if(jsonDocument.isNull())
    {
        qDebug()<< "===> please check the string "<< jsonString.toLocal8Bit().data();
    }
    QJsonObject jsonObject = jsonDocument.object();
    return jsonObject;
}

QString JsonToQString(QJsonObject jsonObject)
{
    return QString(QJsonDocument(jsonObject).toJson());
}

void MainWindow::on_pushButton_open_clicked()
{
    QString fileContent;
    QString filename= QFileDialog::getOpenFileName(this, tr("打开一个文本文档"),QDir::homePath(),tr("Text files(*.txt)"));
 //获取要打开的文档
    if(filename.isEmpty())
       return;

    QFile file(filename);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
       return;

    QTextStream in(&file);
    fileContent = in.readAll();
    file.close();
    ui->textEdit_input->clear();
    ui->textEdit_input->setPlainText(fileContent);
    //将文档内容显示到输入框上
}
void MainWindow::receivelogin(){
    this->show();
}

void MainWindow::on_pushButton_save_clicked()
{
    //Save File
     qDebug()<< "FFFFFFF";
     QString filename= QFileDialog::getSaveFileName(this, tr("保存为"),QDir::homePath(),tr("Text files(*.txt)"));
//获取保存的位置和标题
     if (filename.isEmpty())
         return;

     QFile file(filename);


       //Open the file
     if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
         return;

     QTextStream out(&file);

     out << ui->textEdit_output->toPlainText() << "\n";

     file.close();
}


void MainWindow::on_comboBox_origin_currentIndexChanged(int index)
{
    QString Langs[8] = {"auto","zh","en","fra","de","jp","kor","spa"};
    //目标语种列表
    m_sourceType = Langs[index];
}


void MainWindow::on_actionEnglish_triggered()
{
    ui->actionEnglish->setChecked(true);
    ui->actionChinese->setChecked(false);

    ui->label_Level->setText("Level");
    ui->label_origin->setText("From");
    ui->label_target->setText("To");

    ui->comboBox_origin->setItemText(0,"Automatic");
    ui->comboBox_origin->setItemText(1,"Chinese");
    ui->comboBox_origin->setItemText(2,"English");
    ui->comboBox_origin->setItemText(3,"French");
    ui->comboBox_origin->setItemText(4,"German");
    ui->comboBox_origin->setItemText(5,"Japanese");
    ui->comboBox_origin->setItemText(6,"Korean");
    ui->comboBox_origin->setItemText(7,"Spanish");


    ui->comboBox_target->setItemText(0,"Chinese");
    ui->comboBox_target->setItemText(1,"English");
    ui->comboBox_target->setItemText(2,"French");
    ui->comboBox_target->setItemText(3,"German");
    ui->comboBox_target->setItemText(4,"Japanese");
    ui->comboBox_target->setItemText(5,"Korean");
    ui->comboBox_target->setItemText(6,"Spanish");


    ui->menuLanguage->setTitle("Language");
    ui->pushButton_change->setText("Exchange");
    ui->pushButton_open->setText("Open");
    ui->pushButton_save->setText("Save");
    ui->add->setText("Add");
    ui->delete_2->setText("Delete");
    ui->view->setText("Note");
    ui->pushButton->setText("Text Editor");
    ui->pushButton_3->setText("Frequents");
    ui->menu_4->setTitle("Library");
    ui->actionss->setText("Exit");
    ui->menu_5->setTitle("Account");
    ui->menu_2->setTitle("Note");
    ui->menu_3->setTitle("File");
    ui->actiond->setText("Open");
    ui->actiont->setText("Add");
    ui->actions->setText("Delete");
    ui->actiondaoru->setText("Input");
    ui->actiondaorchu->setText("Output");
    ui->actioneditor->setText("Editor");

    if(m_thesisMode){
    ui->pushButton_translate->setText("Reduce");
    }
    else{
        ui->pushButton_translate->setText("Translate");
    }
    //关于maintoolbar的语言更改
    ui->actionFont->setIconText("font");
    ui->actionBold->setToolTip("Bold");
    ui->actionFont->setToolTip("Font");
    ui->actionCopy->setToolTip("Copy");
    ui->actionCut->setToolTip("Cut");
    ui->actionExit->setToolTip("Exit");
    ui->actionItalic->setToolTip("Italic");
    ui->actionNew->setToolTip("New");
    ui->actionOpen->setToolTip("Open");
    ui->actionPaste->setToolTip("Paste");
    ui->actionPrint->setToolTip("Print");
    ui->actionRedo->setToolTip("Redo");
    ui->actionSave->setToolTip("Save");
    ui->actionSave_as->setToolTip("Save_as");
    ui->actionUnderline->setToolTip("Underline");
    ui->actionUndo->setToolTip("Undo");

    ui->comboBox_Level->setItemText(0,"Primary");
    ui->comboBox_Level->setItemText(1,"Medium");
    ui->comboBox_Level->setItemText(2,"Advanced");
    ui->radioButton->setText("Thesis Mode");
}
void MainWindow::newDocument()
{
    currentFile.clear();
    ui->textEdit_input->setText(QString());
    ui->textEdit_output->setText(QString());
}
void MainWindow::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, "open");
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "warning", "can't open the file：" + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit_input->setText(text);
    ui->textEdit_output->setText(text);
    file.close();
}

void MainWindow::save_As()
{
    QString fileName = QFileDialog::getSaveFileName(this, "save as");
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "warning", "Can't be saved：" + file.errorString());
        return ;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text1 = ui->textEdit_input->toPlainText();
    QString text2 = ui->textEdit_output->toPlainText();
    out << text1<<text2;
    file.close();
}

void MainWindow::print()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev, this);
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif // QT_CONFIG(printdialog)
    ui->textEdit->print(&printDev);
#endif // QT_CONFIG(printer)
}

void MainWindow::exit()
{
    QCoreApplication::quit();
}

void MainWindow::copy()
{
#if QT_CONFIG(clipboard)
    ui->textEdit_input->copy();
    ui->textEdit_output->copy();
#endif
}

void MainWindow::cut()
{
#if QT_CONFIG(clipboard)
    ui->textEdit_input->cut();
    ui->textEdit_output->cut();
#endif
}

void MainWindow::paste()
{
#if QT_CONFIG(clipboard)
    ui->textEdit_input->paste();
    ui->textEdit_output->paste();
#endif
}

void MainWindow::undo()
{
    ui->textEdit_input->undo();
    ui->textEdit_output->undo();
}

void MainWindow::redo()
{
    ui->textEdit_input->redo();
    ui->textEdit_output->redo();
}

void MainWindow::selectFont()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
    ui->textEdit_input->setFont(font);
    ui->textEdit_output->setFont(font);
}

void MainWindow::setFontUnderline()
{

    QTextCharFormat ft;
    if(ui->actionUnderline->isChecked())
    ft.setFontUnderline(true);
    else
    ft.setFontUnderline(false);
    QTextCursor cursor;
    if(ui->textEdit_input->hasFocus()){
        cursor = ui->textEdit_input->textCursor();
    }
    else
        cursor = ui->textEdit_output->textCursor();
    if(!cursor.hasSelection()){
        cursor.select(QTextCursor::WordUnderCursor);
    }
    cursor.mergeCharFormat(ft);
    if(ui->textEdit_input->hasFocus()){
        ui->textEdit_input->mergeCurrentCharFormat(ft);
    }
    else
       ui->textEdit_output->mergeCurrentCharFormat(ft);
}

void MainWindow::setFontItalic()
{

    QTextCharFormat ft;
    if(ui->actionItalic->isChecked())
    ft.setFontItalic(true);
    else
    ft.setFontItalic(false);
    QTextCursor cursor;
    if(ui->textEdit_input->hasFocus()){
        cursor = ui->textEdit_input->textCursor();
    }
    else
        cursor = ui->textEdit_output->textCursor();
    if(!cursor.hasSelection()){
        cursor.select(QTextCursor::WordUnderCursor);
    }
    cursor.mergeCharFormat(ft);
    if(ui->textEdit_input->hasFocus()){
        ui->textEdit_input->mergeCurrentCharFormat(ft);
    }
    else
       ui->textEdit_output->mergeCurrentCharFormat(ft);
}

void MainWindow::setFontBold()
{

    QTextCharFormat ft;
    if(ui->actionBold->isChecked())
    ft.setFontWeight(QFont::Bold);
    else
    ft.setFontWeight(QFont::Normal);
    QTextCursor cursor;
    if(ui->textEdit_input->hasFocus()){
        cursor = ui->textEdit_input->textCursor();
    }
    else
        cursor = ui->textEdit_output->textCursor();
    if(!cursor.hasSelection()){
        cursor.select(QTextCursor::WordUnderCursor);
    }
    cursor.mergeCharFormat(ft);
    if(ui->textEdit_input->hasFocus()){
        ui->textEdit_input->mergeCurrentCharFormat(ft);
    }
    else
       ui->textEdit_output->mergeCurrentCharFormat(ft);
}


void MainWindow::about()
{
    QMessageBox::about(this, tr("关于"), tr("simpleking 的文本编辑器。"));
}

void MainWindow::on_actionChinese_triggered()
{
    ui->actionEnglish->setChecked(false);
    ui->actionChinese->setChecked(true);
    ui->label_Level->setText("降重等级");
    ui->label_origin->setText("源语言");
    ui->label_target->setText("目标语言");
    ui->comboBox_origin->setItemText(0,"自动");
    ui->comboBox_origin->setItemText(1,"中文");
    ui->comboBox_origin->setItemText(2,"英语");
    ui->comboBox_origin->setItemText(3,"法语");
    ui->comboBox_origin->setItemText(4,"德语");
    ui->comboBox_origin->setItemText(5,"日语");
    ui->comboBox_origin->setItemText(6,"韩语");
    ui->comboBox_origin->setItemText(7,"西班牙语");


    ui->comboBox_target->setItemText(0,"中文");
    ui->comboBox_target->setItemText(1,"英语");
    ui->comboBox_target->setItemText(2,"法语");
    ui->comboBox_target->setItemText(3,"德语");
    ui->comboBox_target->setItemText(4,"日语");
    ui->comboBox_target->setItemText(5,"韩语");
    ui->comboBox_target->setItemText(6,"西班牙语");

    ui->menuLanguage->setTitle("语言");
    ui->pushButton_change->setText("交换");
    ui->pushButton_open->setText("导入");
    ui->pushButton_save->setText("导出");
    ui->actionBold->setToolTip("斜体");
    ui->actionFont->setToolTip("字体");
    ui->actionCopy->setToolTip("复制");
    ui->actionCut->setToolTip("剪切");
    ui->actionExit->setToolTip("退出");
    ui->actionFont->setToolTip("字体");
    ui->actionItalic->setToolTip("斜体");
    ui->actionNew->setToolTip("新建");
    ui->actionOpen->setToolTip("打开");
    ui->actionPaste->setToolTip("粘贴");
    ui->actionPrint->setToolTip("打印");
    ui->actionRedo->setToolTip("重做");
    ui->actionSave->setToolTip("保存");
    ui->actionSave_as->setToolTip("另存为");
    ui->actionUnderline->setToolTip("下划线");
    ui->actionUndo->setToolTip("撤销");

    ui->add->setText("添加到单词本");
    ui->delete_2->setText("从单词本删除");
    ui->view->setText("单词本");
    ui->pushButton->setText("文本编辑器");
    ui->pushButton_3->setText("高频词汇");
    ui->menu_4->setTitle("单词库");
    ui->actionss->setText("退出账号");
    ui->menu_5->setTitle("账号");
    ui->menu_2->setTitle("单词本");
    ui->menu_3->setTitle("文档翻译");
    ui->actiond->setText("打开");
    ui->actiont->setText("添加");
    ui->actions->setText("删除");
    ui->actiondaoru->setText("导入");
    ui->actiondaorchu->setText("导出");
    ui->actioneditor->setText("文本编辑器");


    if(m_thesisMode){
    ui->pushButton_translate->setText("降重");
    }


    else{
        ui->pushButton_translate->setText("翻译");
    }

    ui->comboBox_Level->setItemText(0,"初级");
    ui->comboBox_Level->setItemText(1,"中级");
    ui->comboBox_Level->setItemText(2,"高级");
    ui->radioButton->setText("论文模式");
}

void MainWindow::on_add_clicked()
{
    QSqlQuery query;
    QDateTime dateTime;
    dateTime = QDateTime::currentDateTime();
    qDebug()<<dateTime;
    QString date = dateTime.toString("yyyy-MM-dd hh:mm:ss ddd");
    qDebug()<<date;

    QString english = ui->textEdit_input->document()->toPlainText();
    QString chinese = ui->textEdit_output->document()->toPlainText();

    QString sql = "INSERT INTO "+login::usernamelogin+"(English,Chinese,datetime) VALUES('"+english+"','"+chinese+"','"+date+"');";
    qDebug()<<sql;
    if(query.exec(sql))
        QMessageBox::information(NULL, "添加","添加成功");
    else
        QMessageBox::information(NULL, "添加","添加失败");

    sql = "INSERT INTO aJohnson(English,Chinese,datetime) VALUES('"+english+"','"+chinese+"','"+date+"');";
    qDebug()<<sql;
    query.exec(sql);

}


void MainWindow::on_view_clicked()
{
   emit shownote();
}



void MainWindow::on_delete_2_clicked()
{
    QSqlQuery query;
    QString a = ui->textEdit_input->document()->toPlainText();
    QString username_ = 'a'+login::usernamelogin;
//    QString sql = "DELETE FROM "+login::usernamelogin+" WHERE English = '"+a+"';";
//    if(!query.exec(sql))
//    {qDebug()<<login::usernamelogin;
//        qDebug()<<sql;}
//    else
//    {QMessageBox::information(NULL, "添加","删除失败");
//        qDebug()<<sql;}
    QString str = QString("DELETE FROM %1 WHERE English = '%2'").arg(login::usernamelogin).arg(a);
    qDebug()<<str;
    query.exec(str);
    str = "ALTER TABLE "+login::usernamelogin+" DROP id";
    query.exec(str);
    str = "ALTER TABLE "+login::usernamelogin+" ADD id int(5) not null auto_increment ,ADD primary key (id);";
    query.exec(str);
}


void MainWindow::on_pushButton_change_clicked()
{
    if(m_sourceType!="auto"){
        int temp = ui->comboBox_origin->currentIndex();

        ui->comboBox_origin->setCurrentIndex(ui->comboBox_target->currentIndex()+1);
        ui->comboBox_target->setCurrentIndex(temp-1);
    }
}


void MainWindow::on_pushButton_clicked()
{
    emit shownotepad();
    //显示文本编辑器（快速笔记）
}


void MainWindow::on_cet_clicked()
{
    emit showcet();
    //显示六级单词库
}


void MainWindow::on_pushButton_2_clicked()
{
    emit showwords();
    //显示words单词库
}


void MainWindow::on_actioneditor_triggered()
{
    emit shownotepad();
    //显示文本编辑器
}


void MainWindow::on_actiond_triggered()
{
     emit shownote();
    //显示note
}


void MainWindow::on_actiont_triggered()
{
    QSqlQuery query;
    QDateTime dateTime;
    dateTime = QDateTime::currentDateTime();
    //获取当前时间
    qDebug()<<dateTime;
    //调试
    QString date = dateTime.toString("yyyy-MM-dd hh:mm:ss ddd");
    //格式化输出
    qDebug()<<date;

    QString chinese = ui->textEdit_input->document()->toPlainText();
    //获取chinese
    QString english = ui->textEdit_output->document()->toPlainText();
    //获取english

    //执行sql语句
    QString sql = "INSERT INTO "+login::usernamelogin+"(English,Chinese,datetime) VALUES('"+chinese+"','"+english+"','"+date+"');";
    qDebug()<<sql;
    if(query.exec(sql))
        QMessageBox::information(NULL, "添加","添加成功");
    else
        QMessageBox::information(NULL, "添加","添加失败");

    sql = "INSERT INTO aJohnson(English,Chinese,datetime) VALUES('"+chinese+"','"+english+"','"+date+"');";
    qDebug()<<sql;
    query.exec(sql);

}


void MainWindow::on_actions_triggered()
{
    QSqlQuery query;
    QString a = ui->textEdit_input->document()->toPlainText();
    QString username_ = 'a'+login::usernamelogin;
    QString str = QString("DELETE FROM %1 WHERE English = '%2'").arg(login::usernamelogin).arg(a);
    qDebug()<<str;
    query.exec(str);
}


void MainWindow::on_actiondaoru_triggered()
{
    //导入按钮
    QString fileContent;
    QString filename= QFileDialog::getOpenFileName(this, tr("打开一个文本文档"),QDir::homePath(),tr("Text files(*.txt)"));

    if(filename.isEmpty())
       return;

    QFile file(filename);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
       return;

    QTextStream in(&file);
    fileContent = in.readAll();
    file.close();
    ui->textEdit_input->clear();
    ui->textEdit_input->setPlainText(fileContent);
}


void MainWindow::on_actiondaorchu_triggered()
{
       //Save File
       qDebug()<< "FFFFFFF";
       QString filename= QFileDialog::getSaveFileName(this, tr("保存为"),QDir::homePath(),tr("Text files(*.txt)"));

       if (filename.isEmpty())
           return;

       QFile file(filename);

       //Open the file
       if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
           return;

       QTextStream out(&file);

       out << ui->textEdit_output->toPlainText() << "\n";

       file.close();

}

void MainWindow::on_actiondanci_triggered()
{
    emit showcet();
    //显示六级单词库
}


void MainWindow::on_action10w_words_triggered()
{
    emit showwords();
    //显示words单词库
}


void MainWindow::on_actionss_triggered()
{
    emit showlogin();
    //显示login单词库
    this->hide();
    //隐藏页面
}


void MainWindow::on_pushButton_3_clicked()
{
    emit showgaopin();
    //显示高频单词库
}









