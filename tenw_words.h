#ifndef TENW_WORDS_H
#define TENW_WORDS_H

#include <QWidget>

namespace Ui {
class tenw_words;
}

class tenw_words : public QWidget
{
    Q_OBJECT

public:

    explicit tenw_words(QWidget *parent = nullptr);
    //构造函数
    ~tenw_words();
    //析构函数

private:

    Ui::tenw_words *ui;

private slots:

    void receiveshowwords();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

};

#endif // TENW_WORDS_H
