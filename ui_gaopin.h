/********************************************************************************
** Form generated from reading UI file 'gaopin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAOPIN_H
#define UI_GAOPIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gaopin
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *gaopin)
    {
        if (gaopin->objectName().isEmpty())
            gaopin->setObjectName(QString::fromUtf8("gaopin"));
        gaopin->resize(400, 300);
        gridLayout = new QGridLayout(gaopin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(gaopin);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(gaopin);

        QMetaObject::connectSlotsByName(gaopin);
    } // setupUi

    void retranslateUi(QWidget *gaopin)
    {
        gaopin->setWindowTitle(QCoreApplication::translate("gaopin", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gaopin: public Ui_gaopin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAOPIN_H
