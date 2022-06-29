#include "tenw_words.h"
#include "ui_tenw_words.h"
#include<QSqlTableModel>
#include"login.h"

tenw_words::tenw_words(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tenw_words)
{
    ui->setupUi(this);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->horizontalHeader()
            ->setStretchLastSection(false);
    this->setWindowIcon(QIcon(":/ima/image/dt2.png"));
    //生成窗口图标
    setWindowTitle("Tenw");
}

tenw_words::~tenw_words()
{
    delete ui;
}

void tenw_words::receiveshowwords()
{
    this->show();
    this->show();
    QSqlTableModel *model= new QSqlTableModel(Q_NULLPTR,login::db);
    model->setTable("tenw_words");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();
    ui->tableView->setColumnHidden(3, true);
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->horizontalHeader()
            ->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(model);

}

void tenw_words::on_pushButton_clicked()
{
    ui->tableView->setColumnHidden(2, true);
    ui->tableView->setColumnHidden(3, false);
}


void tenw_words::on_pushButton_2_clicked()
{
    ui->tableView->setColumnHidden(2, false);
    ui->tableView->setColumnHidden(3, true);
}

