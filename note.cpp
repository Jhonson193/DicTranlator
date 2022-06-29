#include "note.h"
#include "ui_note.h"
#include"login.h"
#include <QSqlTableModel>
#include<QItemSelectionModel>
#include<QModelIndexList>
#include<QModelIndex>
#include<QMap>
#include<QSqlQuery>
#include<QMessageBox>
#include<stdlib.h>
#include<algorithm>
#include<QStandardItem>
#include<QSqlTableModel>
#include<QSqlIndex>
#include<QVariant>

note::note(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::note)
{

    ui->setupUi(this);
    ui->tableView->setColumnHidden(1, true);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setColumnHidden(1, true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setEditTriggers(QAbstractItemView::CurrentChanged);
    this->setWindowIcon(QIcon(":/ima/image/dt2.png"));//生成窗口图标
    setWindowTitle("自定义单词本");
}

note::~note()
{
    delete ui;
}

void note::receiveshownote()
{
    this->show();
    QSqlQuery query;
//    QSqlQueryModel *model1 = new QSqlQueryModel;
    QSqlTableModel *model= new QSqlTableModel(Q_NULLPTR,login::db);
    model->setTable(login::usernamelogin);
//    model->setEditStrategy(QSqlTableModel::OnFieldChange);
//    model1->setQuery("SELECT English,Chinese,datetime FROM "+login::usernamelogin+"");
    QString sql ="SELECT English,Chinese,datetime FROM "+login::usernamelogin+"";
    query.exec(sql);
    model->select();
    ui->tableView->setColumnHidden(4, true);
    ui->tableView->setColumnHidden(2, true);
    ui->tableView->setModel(model);


}

void note::on_pushButton_clicked()
{
    ui->tableView->setColumnHidden(1, true);
    //隐藏
    ui->tableView->setColumnHidden(2, false);
    //显示
}


void note::on_pushButton_2_clicked()
{
    ui->tableView->setColumnHidden(1, false);
    //显示
    ui->tableView->setColumnHidden(2, true);
    //隐藏
}


void note::on_del_clicked()
{
      QSqlQuery query;
//    QSqlTableModel *model = new QSqlTableModel(Q_NULLPTR,login::db);
//    model->setTable(login::usernamelogin);
//    QModelIndex index3 = model->index(ui->tableView->currentIndex().row(),ui->tableView->currentIndex().column());      //获取选定的单元格的内容
//    QString cell = model->data(index3).toString();
//    qDebug()<<ui->tableView->currentIndex().row();
//    qDebug()<<index3;
//    qDebug() << "cell:" << cell;

    int x = ui->tableView->currentIndex().row()+1;
    QString sql = QString("DELETE FROM "+login::usernamelogin+" WHERE id = %1").arg(x);
    qDebug()<<sql;
    query.exec(sql);
    QString str = "ALTER "
                  "TABLE "+login::usernamelogin+""
                                                " DROP id";
    query.exec(str);
    str = "ALTER "
          "TABLE "+login::usernamelogin+""
                                        " ADD id int(5) not null auto_increment ,"
                                        "ADD primary key (id);";
    query.exec(str);
    //执行str
    //设置mode
    QSqlTableModel *model= new QSqlTableModel(Q_NULLPTR,login::db);
    model->setTable(login::usernamelogin);
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    ui->tableView->setColumnHidden(4, true);
    //不可见
    ui->tableView->setModel(model);
    //显示tableview


}


void note::on_pushButton_3_clicked()
{
     QDateTime dateTime;
     dateTime = QDateTime::currentDateTime();
     //获取当前时间
     qDebug()<<dateTime;
     //调试
     QString date = dateTime.toString("yyyy-MM-dd hh:mm:ss ddd");
     //格式化输出
     qDebug()<<date;
     //调试

     QSqlQuery query;
     //执行sql语句  添加空行
     QString sql = "INSERT"
                   " INTO "+login::usernamelogin+" "
                                                 "(English,Chinese,datetime)"
                                                 " VALUES('','','"+date+"');";
     query.exec(sql);
     qDebug()<<sql;
     QString str = "ALTER "
                   "TABLE "+login::usernamelogin+" "
                                                 "DROP id";
     query.exec(str);
     str = "ALTER "
           "TABLE "+login::usernamelogin+" "
                                         "ADD id int(5) not null auto_increment ,"
                                         "ADD primary key (id);";
     query.exec(str);
     QSqlTableModel *model= new QSqlTableModel(Q_NULLPTR,login::db);
     model->setTable(login::usernamelogin);
     model->setEditStrategy(QSqlTableModel::OnFieldChange);
     model->select();
     ui->tableView->setColumnHidden(4,true);

     //显示tableview
     ui->tableView->setModel(model);
}


void note::on_pushButton_4_clicked()
{
    ui->tableView->setColumnHidden(1, false);
    //显示
    ui->tableView->setColumnHidden(2, false);
    //显示
}

