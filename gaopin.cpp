#include "gaopin.h"
#include "ui_gaopin.h"
#include "login.h"

#include <QSqlTableModel>

gaopin::gaopin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gaopin)
{
    ui->setupUi(this);
}

gaopin::~gaopin()
{
    delete ui;
}

void gaopin::receiveshowgaopin()
{
    this->show();
    //显示高频词汇界面

    QSqlTableModel *model= new QSqlTableModel(Q_NULLPTR,login::db);

    model->setTable("gaopin");
    //设置model
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    ui->tableView->setModel(model);

    setWindowTitle("高频词汇");
    //设置窗口名称

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //列宽自适应
}
