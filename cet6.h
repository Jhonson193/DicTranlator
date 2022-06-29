#ifndef CET6_H
#define CET6_H

#include <QWidget>

namespace Ui {
class cet6;
}

class cet6 : public QWidget
{
    Q_OBJECT

public:

    explicit cet6(QWidget *parent = nullptr);
    //构造函数
    ~cet6();
    //析构函数

private slots:

    void receiveshowcet6();
    //打开cet6界面
    void on_pushButton_clicked();
    //测试
    void on_pushButton_2_clicked();
    //恢复

private:

    Ui::cet6 *ui;

};

#endif // CET6_H
