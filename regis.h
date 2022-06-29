#ifndef REGIS_H
#define REGIS_H

#include <QWidget>

namespace Ui {
class regis;
}

class regis : public QWidget
{
    Q_OBJECT

public:

    explicit regis(QWidget *parent = nullptr);
    //构造器
    ~regis();
    //析构器

private:

    Ui::regis *ui;
    QString username1;
    //注册名

private slots:

    void receivereg();
    void on_pushButton_clicked();

};

#endif // REGIS_H
