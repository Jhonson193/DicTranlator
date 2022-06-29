/********************************************************************************
** Form generated from reading UI file 'cet6.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CET6_H
#define UI_CET6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cet6
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QWidget *cet6)
    {
        if (cet6->objectName().isEmpty())
            cet6->setObjectName(QString::fromUtf8("cet6"));
        cet6->resize(560, 422);
        cet6->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(212, 243, 246);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	background:rgb(137, 207, 240) ;\n"
"    font: 700 9pt \"Microsoft YaHei UI\";\n"
"}\n"
"\n"
""));
        gridLayout = new QGridLayout(cet6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(cet6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(cet6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        tableView = new QTableView(cet6);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 255, 244);"));

        gridLayout->addWidget(tableView, 1, 0, 1, 2);


        retranslateUi(cet6);

        QMetaObject::connectSlotsByName(cet6);
    } // setupUi

    void retranslateUi(QWidget *cet6)
    {
        cet6->setWindowTitle(QCoreApplication::translate("cet6", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("cet6", "test", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cet6", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cet6: public Ui_cet6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CET6_H
