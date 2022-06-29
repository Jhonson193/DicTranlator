#ifndef GAOPIN_H
#define GAOPIN_H

#include <QWidget>

namespace Ui {
class gaopin;
}

class gaopin : public QWidget
{
    Q_OBJECT

public:

    explicit gaopin(QWidget *parent = nullptr);
    ~gaopin();

private:

    Ui::gaopin *ui;

private slots:

    void receiveshowgaopin();

};

#endif // GAOPIN_H
