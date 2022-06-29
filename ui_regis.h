/********************************************************************************
** Form generated from reading UI file 'regis.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIS_H
#define UI_REGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regis
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *regis)
    {
        if (regis->objectName().isEmpty())
            regis->setObjectName(QString::fromUtf8("regis"));
        regis->resize(400, 300);
        regis->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"\n"
"QLabel{\n"
"	font: 700 14pt \"Microsoft PhagsPa\";\n"
"color:white;\n"
"background:transparent;\n"
"}"));
        lineEdit = new QLineEdit(regis);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 110, 161, 21));
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(regis);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 210, 41, 20));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 10pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        lineEdit_2 = new QLineEdit(regis);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 170, 161, 20));
        label = new QLabel(regis);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 80, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\345\205\211\347\220\245\347\217\200_CNKI")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        label_2 = new QLabel(regis);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 140, 131, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";\n"
"font: 16pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        label_3 = new QLabel(regis);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 40, 161, 31));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"	color: rgb(176, 248, 255);\n"
"background:#3;\n"
"font: 25pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        lineEdit->raise();
        pushButton->raise();
        lineEdit_2->raise();
        label_2->raise();
        label->raise();
        label_3->raise();

        retranslateUi(regis);

        QMetaObject::connectSlotsByName(regis);
    } // setupUi

    void retranslateUi(QWidget *regis)
    {
        regis->setWindowTitle(QCoreApplication::translate("regis", "Register", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("regis", "\347\241\256\350\256\244", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        label->setText(QCoreApplication::translate("regis", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("regis", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("regis", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regis: public Ui_regis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIS_H
