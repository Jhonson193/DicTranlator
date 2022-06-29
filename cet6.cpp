#include "cet6.h"
#include "ui_cet6.h"
#include"login.h"

#include<QSqlTableModel>

cet6::cet6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cet6)
{
    ui->setupUi(this);
    ui->tableView->setSortingEnabled(true);
    //设置可分类
    ui->tableView->horizontalHeader()->setStretchLastSection(false);
    //设置tableview自适应列宽
    this->setWindowIcon(QIcon(":/ima/image/dt2.png"));
    //生成窗口图标
    ui->tableView->setColumnHidden(2, true);
}

cet6::~cet6()
{
    delete ui;
}

void cet6::receiveshowcet6()
{
    this->show();

    QSqlTableModel *model= new QSqlTableModel(Q_NULLPTR,login::db);

    //设置model
    model->setTable("cetsix");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    ui->tableView->setModel(model);

    setWindowTitle("CET6");
    //设置窗体名字
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //自适应列宽
}

void cet6::on_pushButton_clicked()
{
    ui->tableView->setColumnHidden(1, true);
    //隐藏第二列
    ui->tableView->setColumnHidden(2, false);
    //显示第三列
}

void cet6::on_pushButton_2_clicked()
{
    ui->tableView->setColumnHidden(1, false);
    //显示第二列
    ui->tableView->setColumnHidden(2, true);
    //隐藏第三列
}

