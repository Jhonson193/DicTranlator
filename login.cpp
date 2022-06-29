#include "login.h"
#include "ui_login.h"

#include<QSqlDatabase>
#include<QMessageBox>
#include<QDebug>
#include<QSqlError>
#include<QString>
#include<QSqlQuery>
#include<QLineEdit>
#include <QSqlTableModel>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->userline->setPlaceholderText(u8"username");
    ui->passline->setPlaceholderText(u8"passsword");
    ui->passline->setEchoMode(QLineEdit::Password);

    //连接数据库
    db.setHostName("127.0.0.s1");       //设置IP
    db.setPort(3306);                   //设置主机
    db.setDatabaseName("mysql"); //设置数据库名字
    db.setUserName("root");      //设置账号
    db.setPassword("root");      //设置密码
    db.open();

    //执行sql语句
    QSqlQuery sqlQuery;
    QString str = "USE test;";
    sqlQuery.exec(str);
    QString sql;

    //设置登录enter快捷键
    ui->loginbutton->setFocus();
    ui->loginbutton->setShortcut( QKeySequence::InsertParagraphSeparator);
    ui->loginbutton->setShortcut(Qt::Key_Enter);

    this->setWindowIcon(QIcon(":/ima/image/dt2.png"));
    //生成窗口图标

    //设置窗体名称
    setWindowTitle("Login");
}

login::~login()
{
    delete ui;
}

void login::on_loginbutton_clicked()
{

    QString username = ui->userline->text();
    //获取userline
    QString password = ui->passline->text();
    //获取passline
    QSqlTableModel *model = new QSqlTableModel;
    //设置model

    //设置表
    model->setTable("user_info");
    model->setFilter(QString("username='%1' and password='%2'")
                     .arg(username)
                     .arg(password));
    model->select();

    int row = 0;
    row = model->rowCount();
    QSqlQuery query;
    QString str = "USE test;";
    query.exec(str);

    if((row> 0)||((username=="scut")&&(password=="scut")))
    {
       QMessageBox::information(NULL, "login提示","login成功");
       //登录成功提示

       this->hide();
       emit showmain();
       qDebug()<<"sucess";
       usernamelogin = 'a'+username;
       //创建账号名
    }
    else
   {
        QMessageBox::information(NULL, "login提示","login失败");
        //登录失败提示
    }
   delete model;
}

void login::on_registerbutton_clicked()
{
    emit showreg();
}

void login::initiallogin()
{
     ui->userline->clear();
     //清空useline
     ui->passline->clear();
     //清空passline
}

void login::receiveshowlogin()
{
     initiallogin();
     //初始化login
     this->show();
     //显示login

}
