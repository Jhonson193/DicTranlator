/********************************************************************************
** Form generated from reading UI file 'tenw_words.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENW_WORDS_H
#define UI_TENW_WORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tenw_words
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QWidget *tenw_words)
    {
        if (tenw_words->objectName().isEmpty())
            tenw_words->setObjectName(QString::fromUtf8("tenw_words"));
        tenw_words->resize(634, 441);
        tenw_words->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(212, 243, 246);\n"
"}"));
        gridLayout = new QGridLayout(tenw_words);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(tenw_words);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(tenw_words);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        tableView = new QTableView(tenw_words);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 255, 250);"));

        gridLayout->addWidget(tableView, 1, 0, 1, 2);


        retranslateUi(tenw_words);

        QMetaObject::connectSlotsByName(tenw_words);
    } // setupUi

    void retranslateUi(QWidget *tenw_words)
    {
        tenw_words->setWindowTitle(QCoreApplication::translate("tenw_words", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("tenw_words", "test", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tenw_words", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tenw_words: public Ui_tenw_words {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENW_WORDS_H
