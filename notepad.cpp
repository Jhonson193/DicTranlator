#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif // QT_CONFIG(printdialog)
#include <QPrinter>
#endif // QT_CONFIG(printer)
#endif // QT_PRINTSUPPORT_LIB
#include <QFont>
#include <QFontDialog>

#include "notepad.h"
#include "ui_notepad.h"


Notepad::Notepad(QWidget *parent) : QMainWindow(parent),
                                    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    //设定中心窗口

    setWindowTitle("文本编辑器");
    //给整个界面起标题

    this->setWindowIcon(QIcon(":/ima/image/dt2.png"));
    //生成窗口图标

    //连接信号与槽：将工具栏的按键与操作关联
    connect(ui->actionNew, &QAction::triggered, this, &Notepad::newDocument);//新建

    connect(ui->actionOpen, &QAction::triggered, this, &Notepad::open);//打开

    connect(ui->actionSave, &QAction::triggered, this, &Notepad::save);//保存

    connect(ui->actionSave_as, &QAction::triggered, this, &Notepad::saveAs);//另存为

    connect(ui->actionPrint, &QAction::triggered, this, &Notepad::print);//打印

    connect(ui->actionExit, &QAction::triggered, this, &Notepad::exit);//退出

    connect(ui->actionCopy, &QAction::triggered, this, &Notepad::copy);//复制

    connect(ui->actionCut, &QAction::triggered, this, &Notepad::cut);//剪切

    connect(ui->actionPaste, &QAction::triggered, this, &Notepad::paste);//粘贴

    connect(ui->actionUndo, &QAction::triggered, this, &Notepad::undo);//撤销

    connect(ui->actionRedo, &QAction::triggered, this, &Notepad::redo);//重做

    connect(ui->actionFont, &QAction::triggered, this, &Notepad::selectFont);//字体

    connect(ui->actionBold, &QAction::triggered, this, &Notepad::setFontBold);//粗体

    connect(ui->actionUnderline, &QAction::triggered, this, &Notepad::setFontUnderline);//下划线

    connect(ui->actionItalic, &QAction::triggered, this, &Notepad::setFontItalic);//斜体

    connect(ui->actionAbout, &QAction::triggered, this, &Notepad::about);//默认语言为中文

    connect(ui->actionChinese,&QAction::triggered,this,&Notepad::Chinese);//切换为中文

    connect(ui->actionEnglish,&QAction::triggered,this,&Notepad::English);//切换为英文

    ui->actionChinese->setChecked(true);
    ui->actionEnglish->setChecked(false);


// Disable menu actions for unavailable features
#if !defined(QT_PRINTSUPPORT_LIB) || !QT_CONFIG(printer)
    ui->actionPrint->setEnabled(false);
#endif

#if !QT_CONFIG(clipboard)
    ui->actionCut->setEnabled(false);
    ui->actionCopy->setEnabled(false);
    ui->actionPaste->setEnabled(false);
#endif
}

Notepad::~Notepad()
{
    delete ui;
}


void Notepad::receiveshownotepad()
{
    this->show();
}

//实现新建功能
void Notepad::newDocument()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

//实现打开功能
void Notepad::open()
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
    ui->textEdit->setText(text);
    file.close();
}

//实现保存功能
void Notepad::save()
{
    QString fileName;
    // If we don't have a filename from before, get one.
    if (currentFile.isEmpty())
    {
        fileName = QFileDialog::getSaveFileName(this, "save");
        currentFile = fileName;
    }
    else
    {
        fileName = currentFile;
    }
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "warning", "can't be saved：" + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

//实现另存为功能
void Notepad::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, "save as");
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "warning", "Can't be saved：" + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

//实现打印功能
void Notepad::print()
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

//实现退出功能
void Notepad::exit()
{
    QCoreApplication::quit();
}

//实现复制功能
void Notepad::copy()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->copy();
#endif
}

//实现剪切功能
void Notepad::cut()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->cut();
#endif
}

//实现粘贴功能
void Notepad::paste()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->paste();
#endif
}

//实现撤销
void Notepad::undo()
{
    ui->textEdit->undo();
}

//实现重做
void Notepad::redo()
{
    ui->textEdit->redo();
}

//实现选择字体功能
void Notepad::selectFont()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
        ui->textEdit->setFont(font);
}

//实现下划线
void Notepad::setFontUnderline(bool underline)
{
    ui->textEdit->setFontUnderline(underline);
}

//实现斜体
void Notepad::setFontItalic(bool italic)
{
    ui->textEdit->setFontItalic(italic);
}

//实现粗体
void Notepad::setFontBold(bool bold)
{
    bold ? ui->textEdit->setFontWeight(QFont::Bold) : ui->textEdit->setFontWeight(QFont::Normal);
}

//切换语言为中文
void Notepad::Chinese(){

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

}

//实现语言为英文
void Notepad::English(){

    ui->actionChinese->setChecked(false);//关闭中文语言

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

}
void Notepad::about()
{
    QMessageBox::about(this, tr("关于"), tr("simpleking 的文本编辑器。"));
}
