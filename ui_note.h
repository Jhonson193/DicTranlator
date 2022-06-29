/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_note
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *del;
    QPushButton *pushButton_4;

    void setupUi(QWidget *note)
    {
        if (note->objectName().isEmpty())
            note->setObjectName(QString::fromUtf8("note"));
        note->resize(612, 503);
        note->setStyleSheet(QString::fromUtf8("*{\n"
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
        gridLayout = new QGridLayout(note);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(note);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(note);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 4, 1, 1);

        tableView = new QTableView(note);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setAutoFillBackground(false);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 255, 230);"));
        tableView->setSortingEnabled(true);

        gridLayout->addWidget(tableView, 3, 0, 1, 5);

        pushButton = new QPushButton(note);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        del = new QPushButton(note);
        del->setObjectName(QString::fromUtf8("del"));

        gridLayout->addWidget(del, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(note);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);


        retranslateUi(note);

        QMetaObject::connectSlotsByName(note);
    } // setupUi

    void retranslateUi(QWidget *note)
    {
        note->setWindowTitle(QCoreApplication::translate("note", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("note", "add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("note", "back", nullptr));
        pushButton->setText(QCoreApplication::translate("note", "test", nullptr));
        del->setText(QCoreApplication::translate("note", "delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("note", "all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class note: public Ui_note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
