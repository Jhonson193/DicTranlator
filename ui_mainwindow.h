/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionChinese;
    QAction *actionEnglish;
    QAction *actioneditor;
    QAction *actiond;
    QAction *actiont;
    QAction *actions;
    QAction *actiondaoru;
    QAction *actiondaorchu;
    QAction *actiondanci;
    QAction *action10w_words;
    QAction *actionss;
    QAction *actionzhanghu;
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
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QTextEdit *textEdit_output;
    QTextEdit *textEdit_input;
    QPushButton *pushButton_translate;
    QWidget *widget_3;
    QPushButton *add;
    QPushButton *delete_2;
    QPushButton *cet;
    QPushButton *pushButton;
    QPushButton *view;
    QPushButton *pushButton_open;
    QPushButton *pushButton_save;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_origin;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_target;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_origin;
    QPushButton *pushButton_change;
    QComboBox *comboBox_target;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Level;
    QComboBox *comboBox_Level;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuLanguage;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(755, 598);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 243, 246);"));
        actionChinese = new QAction(MainWindow);
        actionChinese->setObjectName(QString::fromUtf8("actionChinese"));
        actionChinese->setCheckable(true);
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        actioneditor = new QAction(MainWindow);
        actioneditor->setObjectName(QString::fromUtf8("actioneditor"));
        actiond = new QAction(MainWindow);
        actiond->setObjectName(QString::fromUtf8("actiond"));
        actiont = new QAction(MainWindow);
        actiont->setObjectName(QString::fromUtf8("actiont"));
        actions = new QAction(MainWindow);
        actions->setObjectName(QString::fromUtf8("actions"));
        actiondaoru = new QAction(MainWindow);
        actiondaoru->setObjectName(QString::fromUtf8("actiondaoru"));
        actiondaorchu = new QAction(MainWindow);
        actiondaorchu->setObjectName(QString::fromUtf8("actiondaorchu"));
        actiondanci = new QAction(MainWindow);
        actiondanci->setObjectName(QString::fromUtf8("actiondanci"));
        action10w_words = new QAction(MainWindow);
        action10w_words->setObjectName(QString::fromUtf8("action10w_words"));
        actionss = new QAction(MainWindow);
        actionss->setObjectName(QString::fromUtf8("actionss"));
        actionzhanghu = new QAction(MainWindow);
        actionzhanghu->setObjectName(QString::fromUtf8("actionzhanghu"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon12);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon13);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon15);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(-10, -10, 851, 741));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 491, 551));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 191, 160);"));
        textEdit_output = new QTextEdit(widget);
        textEdit_output->setObjectName(QString::fromUtf8("textEdit_output"));
        textEdit_output->setGeometry(QRect(10, 270, 471, 211));
        textEdit_output->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 230, 251);"));
        textEdit_input = new QTextEdit(widget);
        textEdit_input->setObjectName(QString::fromUtf8("textEdit_input"));
        textEdit_input->setGeometry(QRect(10, 30, 471, 221));
        textEdit_input->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 230, 251);"));
        pushButton_translate = new QPushButton(widget);
        pushButton_translate->setObjectName(QString::fromUtf8("pushButton_translate"));
        pushButton_translate->setGeometry(QRect(400, 219, 71, 21));
        pushButton_translate->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(500, 10, 331, 571));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 227, 150);"));
        add = new QPushButton(widget_3);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(10, 90, 91, 20));
        add->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        delete_2 = new QPushButton(widget_3);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(10, 120, 91, 21));
        delete_2->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        cet = new QPushButton(widget_3);
        cet->setObjectName(QString::fromUtf8("cet"));
        cet->setGeometry(QRect(20, 400, 80, 20));
        cet->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 370, 80, 20));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        view = new QPushButton(widget_3);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(20, 340, 80, 20));
        view->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        pushButton_open = new QPushButton(widget_3);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(110, 90, 80, 20));
        pushButton_open->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        pushButton_save = new QPushButton(widget_3);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(110, 120, 80, 20));
        pushButton_save->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 430, 80, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 191, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_origin = new QLabel(layoutWidget);
        label_origin->setObjectName(QString::fromUtf8("label_origin"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        label_origin->setFont(font);
        label_origin->setStyleSheet(QString::fromUtf8("font: 9pt \"OCR A Extended\";\n"
"font: 700 10pt \"Microsoft YaHei UI\";"));

        horizontalLayout->addWidget(label_origin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_target = new QLabel(layoutWidget);
        label_target->setObjectName(QString::fromUtf8("label_target"));
        label_target->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";\n"
""));

        horizontalLayout->addWidget(label_target);

        layoutWidget1 = new QWidget(widget_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 50, 226, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox_origin = new QComboBox(layoutWidget1);
        comboBox_origin->addItem(QString());
        comboBox_origin->addItem(QString());
        comboBox_origin->addItem(QString());
        comboBox_origin->addItem(QString());
        comboBox_origin->addItem(QString());
        comboBox_origin->addItem(QString());
        comboBox_origin->addItem(QString());
        comboBox_origin->addItem(QString());
        comboBox_origin->setObjectName(QString::fromUtf8("comboBox_origin"));
        comboBox_origin->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(comboBox_origin);

        pushButton_change = new QPushButton(layoutWidget1);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        QFont font1;
        font1.setBold(true);
        pushButton_change->setFont(font1);
        pushButton_change->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 150, 0);"));
        pushButton_change->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_change);

        comboBox_target = new QComboBox(layoutWidget1);
        comboBox_target->addItem(QString());
        comboBox_target->addItem(QString());
        comboBox_target->addItem(QString());
        comboBox_target->addItem(QString());
        comboBox_target->addItem(QString());
        comboBox_target->addItem(QString());
        comboBox_target->addItem(QString());
        comboBox_target->setObjectName(QString::fromUtf8("comboBox_target"));
        comboBox_target->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(comboBox_target);

        layoutWidget2 = new QWidget(widget_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 240, 121, 57));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Microsoft YaHei UI\";"));

        verticalLayout->addWidget(radioButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Level = new QLabel(layoutWidget2);
        label_Level->setObjectName(QString::fromUtf8("label_Level"));
        label_Level->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_Level);

        comboBox_Level = new QComboBox(layoutWidget2);
        comboBox_Level->addItem(QString());
        comboBox_Level->addItem(QString());
        comboBox_Level->addItem(QString());
        comboBox_Level->setObjectName(QString::fromUtf8("comboBox_Level"));
        comboBox_Level->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(comboBox_Level);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 460, 80, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("background:rgb(137, 207, 240) ;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        widget_3->raise();
        widget->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 755, 18));
        menuLanguage = new QMenu(menubar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menuLanguage->menuAction());
        menuLanguage->addSeparator();
        menuLanguage->addAction(actionChinese);
        menuLanguage->addAction(actionEnglish);
        menu_2->addAction(actiond);
        menu_2->addAction(actiont);
        menu_2->addAction(actions);
        menu_3->addAction(actiondaoru);
        menu_3->addAction(actiondaorchu);
        menu_3->addSeparator();
        menu_3->addAction(actioneditor);
        menu_4->addAction(actiondanci);
        menu_4->addAction(action10w_words);
        menu_5->addAction(actionss);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_as);
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionFont);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionAbout);
        toolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Translator", nullptr));
        actionChinese->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        actioneditor->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        actiond->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        actiont->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        actions->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        actiondaoru->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245", nullptr));
        actiondaorchu->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
        actiondanci->setText(QCoreApplication::translate("MainWindow", "CET6", nullptr));
        action10w_words->setText(QCoreApplication::translate("MainWindow", "10w_words", nullptr));
        actionss->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        actionzhanghu->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "new", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "save_as", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_as->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("MainWindow", "print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "\347\246\273\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "copy", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "cut", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "paste", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont->setText(QCoreApplication::translate("MainWindow", "font", nullptr));
#if QT_CONFIG(tooltip)
        actionFont->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFont->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("MainWindow", "italic", nullptr));
#if QT_CONFIG(tooltip)
        actionItalic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("MainWindow", "bold", nullptr));
#if QT_CONFIG(tooltip)
        actionBold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "underline", nullptr));
#if QT_CONFIG(tooltip)
        actionUnderline->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QString());
        textEdit_input->setDocumentTitle(QString());
        textEdit_input->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:8.83436pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.83436pt;\"><br /></p></body></html>", nullptr));
        pushButton_translate->setText(QCoreApplication::translate("MainWindow", "\347\277\273\350\257\221", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\210\260\345\215\225\350\257\215\346\234\254", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "\344\273\216\345\215\225\350\257\215\346\234\254\345\210\240\351\231\244", nullptr));
        cet->setText(QCoreApplication::translate("MainWindow", "CET6", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        view->setText(QCoreApplication::translate("MainWindow", "\345\215\225\350\257\215\346\234\254", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\346\226\207\346\241\243", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\226\207\346\241\243", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "10w_words", nullptr));
        label_origin->setText(QCoreApplication::translate("MainWindow", "\346\272\220\350\257\255\350\250\200", nullptr));
        label_target->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\350\257\255\350\250\200", nullptr));
        comboBox_origin->setItemText(0, QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250", nullptr));
        comboBox_origin->setItemText(1, QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        comboBox_origin->setItemText(2, QCoreApplication::translate("MainWindow", "\350\213\261\350\257\255", nullptr));
        comboBox_origin->setItemText(3, QCoreApplication::translate("MainWindow", "\346\263\225\350\257\255", nullptr));
        comboBox_origin->setItemText(4, QCoreApplication::translate("MainWindow", "\345\276\267\350\257\255", nullptr));
        comboBox_origin->setItemText(5, QCoreApplication::translate("MainWindow", "\346\227\245\350\257\255", nullptr));
        comboBox_origin->setItemText(6, QCoreApplication::translate("MainWindow", "\351\237\251\350\257\255", nullptr));
        comboBox_origin->setItemText(7, QCoreApplication::translate("MainWindow", "\350\245\277\347\217\255\347\211\231\350\257\255", nullptr));

        pushButton_change->setText(QCoreApplication::translate("MainWindow", "\344\272\244\346\215\242", nullptr));
        comboBox_target->setItemText(0, QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        comboBox_target->setItemText(1, QCoreApplication::translate("MainWindow", "\350\213\261\350\257\255", nullptr));
        comboBox_target->setItemText(2, QCoreApplication::translate("MainWindow", "\346\263\225\350\257\255", nullptr));
        comboBox_target->setItemText(3, QCoreApplication::translate("MainWindow", "\345\276\267\350\257\255", nullptr));
        comboBox_target->setItemText(4, QCoreApplication::translate("MainWindow", "\346\227\245\350\257\255", nullptr));
        comboBox_target->setItemText(5, QCoreApplication::translate("MainWindow", "\351\237\251\350\257\255", nullptr));
        comboBox_target->setItemText(6, QCoreApplication::translate("MainWindow", "\350\245\277\347\217\255\347\211\231\350\257\255", nullptr));

        radioButton->setText(QCoreApplication::translate("MainWindow", "\350\256\272\346\226\207\346\250\241\345\274\217", nullptr));
        label_Level->setText(QCoreApplication::translate("MainWindow", " \351\231\215\351\207\215\347\255\211\347\272\247", nullptr));
        comboBox_Level->setItemText(0, QCoreApplication::translate("MainWindow", "\345\210\235\347\272\247", nullptr));
        comboBox_Level->setItemText(1, QCoreApplication::translate("MainWindow", "\344\270\255\347\272\247", nullptr));
        comboBox_Level->setItemText(2, QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247", nullptr));

        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\351\253\230\351\242\221\350\257\215\346\261\207", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("MainWindow", "\350\257\255\350\250\200", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\215\225\350\257\215\346\234\254", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\346\241\243\347\277\273\350\257\221", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\215\225\350\257\215\345\272\223", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
