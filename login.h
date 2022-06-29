#ifndef LOGIN_H
#define LOGIN_H

#include"mainwindow.h"
#include"regis.h"
#include <QWidget>
#include<QSqlDatabase>
#include <QString>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:

    inline static QString usernamelogin;
    //用户名
    explicit login(QWidget *parent = nullptr);
    //构造函数
    ~login();
    //析构函数
    inline static QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    //数据库
    void initiallogin();
    //登录初始化

private slots:

    void on_loginbutton_clicked();
    //判断是否登录成功
    void receiveshowlogin();
    //打开界面
    void on_registerbutton_clicked();
    //打开注册界面

signals:

    void showmain();
    //显示主界面
    void showreg();
    //显示登录界面

private:

    Ui::login *ui;

};

#endif // LOGIN_H
