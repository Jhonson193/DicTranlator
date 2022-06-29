#ifndef NOTE_H
#define NOTE_H

#include"login.h"
#include <QWidget>
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

namespace Ui {
class note;
}

class note : public QWidget
{
    Q_OBJECT

public:

    explicit note(QWidget *parent = nullptr);
    //构造器
    ~note();
    //析构器

private:

    Ui::note *ui;
    QSqlTableModel *model= new QSqlTableModel(Q_NULLPTR,login::db);

private slots:

    void receiveshownote();
    //显示单词本界面
    void on_pushButton_clicked();
    //测试
    void on_pushButton_2_clicked();
    //恢复
    void on_del_clicked();
    //删除
    void on_pushButton_3_clicked();
    //添加
    void on_pushButton_4_clicked();

};

#endif // NOTE_H
