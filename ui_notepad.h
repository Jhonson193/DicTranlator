/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QAction *actionItalic;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionAbout;
    QAction *actionChinese;
    QAction *actionEnglish;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuLanguage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(800, 400);
        Notepad->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(212, 243, 246);\n"
"}\n"
"\n"
"\n"
""));
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        QString iconThemeName = QString::fromUtf8("exit.png");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExit->setIcon(icon5);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionFont = new QAction(Notepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionItalic = new QAction(Notepad);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon12);
        actionBold = new QAction(Notepad);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon13);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionAbout = new QAction(Notepad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon15);
        actionChinese = new QAction(Notepad);
        actionChinese->setObjectName(QString::fromUtf8("actionChinese"));
        actionChinese->setCheckable(true);
        actionEnglish = new QAction(Notepad);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 248, 246);"));

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuLanguage = new QMenu(menuBar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        Notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Notepad->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuLanguage->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFont);
        menuLanguage->addAction(actionChinese);
        menuLanguage->addAction(actionEnglish);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFont);
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionItalic);
        mainToolBar->addAction(actionUnderline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Dasyatis \347\232\204\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "new", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("Notepad", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("Notepad", "open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("Notepad", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Notepad", "save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("Notepad", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("Notepad", "save as", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_as->setToolTip(QCoreApplication::translate("Notepad", "\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("Notepad", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("Notepad", "print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("Notepad", "\346\211\223\345\215\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Notepad", "quit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("Notepad", "\347\246\273\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopy->setText(QCoreApplication::translate("Notepad", "copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("Notepad", "cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Notepad", "paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("Notepad", "redo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("Notepad", "urdo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("Notepad", "font", nullptr));
#if QT_CONFIG(shortcut)
        actionFont->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("Notepad", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionItalic->setToolTip(QCoreApplication::translate("Notepad", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("Notepad", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionBold->setToolTip(QCoreApplication::translate("Notepad", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("Notepad", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actionUnderline->setToolTip(QCoreApplication::translate("Notepad", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("Notepad", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("Notepad", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChinese->setText(QCoreApplication::translate("Notepad", "Chinese", nullptr));
        actionEnglish->setText(QCoreApplication::translate("Notepad", "English", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("Notepad", "Language", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
