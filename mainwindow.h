#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <regex>
#include <vector>
#include <QMainWindow>
#include <QNetworkReply>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    //构造函数
    ~MainWindow();
    //析构函数

private:

    Ui::MainWindow *ui;
    //初始化ui
    QSqlQuery query;

private slots:
    void receivelogin();
    //打开登录界面
    void on_add_clicked();
    //添加单词
    void on_view_clicked();
    //显示已添加的单词
    void on_delete_2_clicked();
    //选择要删除的单词
    void newDocument();
    //新建
    void open();
    //打开
    void save_As();
    //另存为
    void print();
    //打印
    void exit();
    //退出
    void copy();
    //复制
    void cut();
    //剪切
    void paste();
    //粘贴
    void undo();
    //撤销
    void redo();
    //重复
    void selectFont();
    //选择字体
    void setFontBold();
    //设置粗体
    void setFontUnderline();
    //设置下划线
    void setFontItalic();
    //设置斜体
    void about();
    //关于

signals:
    void shownote();
    //显示单词本
    void shownotepad();
    //显示文本编辑器
    void showcet();
    //显示cet6界面
    void showlogin();
    //显示登录界面
    void showwords();
    //显示words界面
    void showgaopin();

public:
    QString currentFile;
    QString getHashData(QString);
    QString getSplicingData(QString);
    QString getSyncData(const QString&);

private:
    QString m_sourceType;
    //源语言语种
    QString m_transResultType;
    //目标语言语种
    bool m_thesisMode;
    //论文模式
    QString m_transResult;
    //译文
    QNetworkAccessManager* m_naManager;
    int m_transLevel;
    //降重等级

private slots:
    void updateResult();
    //更新
    void on_pushButton_translate_clicked();
    //翻译/降重
    void on_comboBox_Level_activated(int index);
    //获取降重等级
    void on_comboBox_origin_currentIndexChanged(int index);
    //获取源语言语种
    void on_radioButton_clicked(bool checked);
    //论文模式开关
    void on_pushButton_open_clicked();
    //打开文档
    void on_pushButton_save_clicked();
    //保存文档
    void on_comboBox_target_currentIndexChanged(int index);
    //获取目标语言语种
    void on_pushButton_change_clicked();
    //交换源语言和目标语言
    void on_actionEnglish_triggered();
    //英语界面
    void on_actionChinese_triggered();
    //中文界面
    void on_pushButton_clicked();
    //打开文本编辑器
    void on_cet_clicked();
    //打开cet6界面
    void on_pushButton_2_clicked();
    //打开words界面

    void on_actioneditor_triggered();
    void on_actiond_triggered();
    void on_actiont_triggered();
    void on_actions_triggered();
    void on_actiondaoru_triggered();
    void on_actiondaorchu_triggered();
    void on_actiondanci_triggered();
    void on_action10w_words_triggered();
    void on_actionss_triggered();
    void on_pushButton_3_clicked();





};

QJsonObject QStringToJson(QString jsonString);
//字符串转json
QString JsonToQString(QJsonObject jsonObject);
//json转字符串

#endif // MAINWINDOW_H
