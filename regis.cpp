#include "regis.h"
#include "ui_regis.h"
#include<QSqlDatabase>
#include<QMessageBox>
#include<QDebug>
#include<QSqlError>
#include<QString>
#include<QSqlQuery>
#include<QLineEdit>
#include <QSqlTableModel>
#include<QPushButton>
regis::regis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regis)
{
    ui->setupUi(this);
    QPixmap pixmap(":/ima/image/bg1.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
    //设置注册页面的背景
    this->setWindowIcon(QIcon(":/ima/image/dt2.png"));//生成窗口图标
    setWindowTitle("注册");
}

regis::~regis()
{
    delete ui;
}

void regis::receivereg()
{
    this->show();
}

void regis::on_pushButton_clicked()
{
    QString sql = "use test";
    QSqlQuery query;
    query.exec(sql);
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    sql = "CREATE TABLE if not exists user_info (username VARCHAR(13),password VARCHAR(13));";
    query.exec(sql);
    sql = "INSERT INTO user_info (username,password) VALUES ('"+username+"','"+password+"');";
    if (query.exec(sql))
    {
       QMessageBox::information(NULL,  "注册提示" ,  "注册成功" );

       username1 = 'a'+username;
       qDebug()<<username1;

       sql = "ALTER TABLE "+username1+" ADD id int(5) not null auto_increment ,ADD primary key (id);";
       query.exec(sql);
       sql = "CREATE TABLE if not exists "+username1+" (English VARCHAR(50),Chinese VARCHAR(50),Chinese_test VARCHAR(50),datetime VARCHAR(50));";
               //创建表是否成功
               if (!query.exec(sql))
               {
                   qDebug() << ("创建表失败原因:") << query.lastError();
               }
               else
               {
                   qDebug() << QString::fromLocal8Bit("成功创建表");
               }
        sql = "alter table "+username1+" add unique(English,Chinese);";
        qDebug()<<sql;
        query.exec(sql);
        this->hide();
    }
    else
    {
      QMessageBox::information(NULL,  "注册提示" ,  "注册失败");
    }

}

