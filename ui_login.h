/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *registerbutton;
    QToolButton *toolButton;
    QLabel *label;
    QLineEdit *userline;
    QLineEdit *passline;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *loginbutton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(500, 392);
        login->setStyleSheet(QString::fromUtf8("*{\n"
"font-size:24px;\n"
"font-family:Century Gothic;\n"
"}\n"
"\n"
"#login{\n"
"background:qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(41, 56, 255, 69), stop:0.227273 rgba(0, 137, 255, 69), stop:0.386364 rgba(16, 94, 255, 208), stop:0.465909 rgba(120, 255, 255, 130), stop:0.507045 rgba(120, 255, 255, 130), stop:0.538328 rgba(101, 138, 255, 255), stop:0.57754 rgba(0, 255, 212, 130), stop:0.801136 rgba(111, 255, 0, 145), stop:1 rgba(115, 255, 154, 69))\n"
"}\n"
"\n"
"QToolButton{\n"
"background:rgb(0, 190, 240);\n"
"border-radius:40px;\n"
"}\n"
"QLabel{\n"
"color:white;\n"
"background:transparent;\n"
"}\n"
"QPushButton{\n"
"background:white;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover{\n"
"background:#333;\n"
"border-radius:15px;\n"
"background:#49ebff;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        registerbutton = new QPushButton(login);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setGeometry(QRect(260, 290, 131, 31));
        registerbutton->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 17pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        toolButton = new QToolButton(login);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(200, 20, 81, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ima/image/user2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(100, 100));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 431, 291));
        label->setStyleSheet(QString::fromUtf8("*{\n"
"\n"
"font: 25pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";\n"
"	color: rgb(0, 255, 255);\n"
"}\n"
"\n"
"QFrame{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"background:url(:/ima/image/sky.jpg);\n"
"}\n"
"QPushButton{\n"
"background:#03a9f4;\n"
"color:#fff;\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit{\n"
"border-radius:15px;\n"
"color:#03a9f4;\n"
"}\n"
"QLabel{\n"
"	color: rgb(176, 248, 255);\n"
"background:#3\n"
"font: 32pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";\n"
"}\n"
"\n"
""));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setMargin(50);
        userline = new QLineEdit(login);
        userline->setObjectName(QString::fromUtf8("userline"));
        userline->setGeometry(QRect(80, 180, 201, 21));
        passline = new QLineEdit(login);
        passline->setObjectName(QString::fromUtf8("passline"));
        passline->setGeometry(QRect(80, 250, 201, 21));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 154, 181, 21));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(81, 224, 181, 21));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        loginbutton = new QPushButton(login);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setGeometry(QRect(90, 290, 131, 31));
        loginbutton->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 17pt \"\345\215\216\345\205\211\347\220\245\347\217\200_CNKI\";"));
        loginbutton->setCheckable(true);
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 360, 211, 21));
        label->raise();
        toolButton->raise();
        registerbutton->raise();
        userline->raise();
        passline->raise();
        label_2->raise();
        label_3->raise();
        loginbutton->raise();
        lineEdit->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Login", nullptr));
        registerbutton->setText(QCoreApplication::translate("login", "register", nullptr));
        toolButton->setText(QCoreApplication::translate("login", "...", nullptr));
        label->setText(QCoreApplication::translate("login", "LOGIN HERE", nullptr));
        userline->setText(QString());
        passline->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Password", nullptr));
        loginbutton->setText(QCoreApplication::translate("login", "login", nullptr));
#if QT_CONFIG(shortcut)
        loginbutton->setShortcut(QCoreApplication::translate("login", "Enter, Enter", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
