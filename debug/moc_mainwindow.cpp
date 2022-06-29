/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[112];
    char stringdata0[906];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 8), // "shownote"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 11), // "shownotepad"
QT_MOC_LITERAL(33, 7), // "showcet"
QT_MOC_LITERAL(41, 9), // "showlogin"
QT_MOC_LITERAL(51, 9), // "showwords"
QT_MOC_LITERAL(61, 10), // "showgaopin"
QT_MOC_LITERAL(72, 12), // "receivelogin"
QT_MOC_LITERAL(85, 14), // "on_add_clicked"
QT_MOC_LITERAL(100, 15), // "on_view_clicked"
QT_MOC_LITERAL(116, 19), // "on_delete_2_clicked"
QT_MOC_LITERAL(136, 11), // "newDocument"
QT_MOC_LITERAL(148, 4), // "open"
QT_MOC_LITERAL(153, 7), // "save_As"
QT_MOC_LITERAL(161, 5), // "print"
QT_MOC_LITERAL(167, 4), // "exit"
QT_MOC_LITERAL(172, 4), // "copy"
QT_MOC_LITERAL(177, 3), // "cut"
QT_MOC_LITERAL(181, 5), // "paste"
QT_MOC_LITERAL(187, 4), // "undo"
QT_MOC_LITERAL(192, 4), // "redo"
QT_MOC_LITERAL(197, 10), // "selectFont"
QT_MOC_LITERAL(208, 11), // "setFontBold"
QT_MOC_LITERAL(220, 4), // "bold"
QT_MOC_LITERAL(225, 16), // "setFontUnderline"
QT_MOC_LITERAL(242, 9), // "underline"
QT_MOC_LITERAL(252, 13), // "setFontItalic"
QT_MOC_LITERAL(266, 6), // "italic"
QT_MOC_LITERAL(273, 5), // "about"
QT_MOC_LITERAL(279, 12), // "updateResult"
QT_MOC_LITERAL(292, 31), // "on_pushButton_translate_clicked"
QT_MOC_LITERAL(324, 27), // "on_comboBox_Level_activated"
QT_MOC_LITERAL(352, 5), // "index"
QT_MOC_LITERAL(358, 38), // "on_comboBox_origin_currentInd..."
QT_MOC_LITERAL(397, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(420, 7), // "checked"
QT_MOC_LITERAL(428, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(455, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(482, 38), // "on_comboBox_target_currentInd..."
QT_MOC_LITERAL(521, 28), // "on_pushButton_change_clicked"
QT_MOC_LITERAL(550, 26), // "on_actionEnglish_triggered"
QT_MOC_LITERAL(577, 26), // "on_actionChinese_triggered"
QT_MOC_LITERAL(604, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(626, 14), // "on_cet_clicked"
QT_MOC_LITERAL(641, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(665, 25), // "on_actioneditor_triggered"
QT_MOC_LITERAL(691, 20), // "on_actiond_triggered"
QT_MOC_LITERAL(712, 20), // "on_actiont_triggered"
QT_MOC_LITERAL(733, 20), // "on_actions_triggered"
QT_MOC_LITERAL(754, 24), // "on_actiondaoru_triggered"
QT_MOC_LITERAL(779, 26), // "on_actiondaorchu_triggered"
QT_MOC_LITERAL(806, 24), // "on_actiondanci_triggered"
QT_MOC_LITERAL(831, 28), // "on_action10w_words_triggered"
QT_MOC_LITERAL(860, 21), // "on_actionss_triggered"
QT_MOC_LITERAL(882, 23) // "on_pushButton_3_clicked"

    },
    "MainWindow\0shownote\0\0shownotepad\0"
    "showcet\0showlogin\0showwords\0showgaopin\0"
    "receivelogin\0on_add_clicked\0on_view_clicked\0"
    "on_delete_2_clicked\0newDocument\0open\0"
    "save_As\0print\0exit\0copy\0cut\0paste\0"
    "undo\0redo\0selectFont\0setFontBold\0bold\0"
    "setFontUnderline\0underline\0setFontItalic\0"
    "italic\0about\0updateResult\0"
    "on_pushButton_translate_clicked\0"
    "on_comboBox_Level_activated\0index\0"
    "on_comboBox_origin_currentIndexChanged\0"
    "on_radioButton_clicked\0checked\0"
    "on_pushButton_open_clicked\0"
    "on_pushButton_save_clicked\0"
    "on_comboBox_target_currentIndexChanged\0"
    "on_pushButton_change_clicked\0"
    "on_actionEnglish_triggered\0"
    "on_actionChinese_triggered\0"
    "on_pushButton_clicked\0on_cet_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_actioneditor_triggered\0"
    "on_actiond_triggered\0on_actiont_triggered\0"
    "on_actions_triggered\0on_actiondaoru_triggered\0"
    "on_actiondaorchu_triggered\0"
    "on_actiondanci_triggered\0"
    "on_action10w_words_triggered\0"
    "on_actionss_triggered\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  308,    2, 0x06,    1 /* Public */,
       3,    0,  309,    2, 0x06,    2 /* Public */,
       4,    0,  310,    2, 0x06,    3 /* Public */,
       5,    0,  311,    2, 0x06,    4 /* Public */,
       6,    0,  312,    2, 0x06,    5 /* Public */,
       7,    0,  313,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  314,    2, 0x08,    7 /* Private */,
       9,    0,  315,    2, 0x08,    8 /* Private */,
      10,    0,  316,    2, 0x08,    9 /* Private */,
      11,    0,  317,    2, 0x08,   10 /* Private */,
      12,    0,  318,    2, 0x08,   11 /* Private */,
      13,    0,  319,    2, 0x08,   12 /* Private */,
      14,    0,  320,    2, 0x08,   13 /* Private */,
      15,    0,  321,    2, 0x08,   14 /* Private */,
      16,    0,  322,    2, 0x08,   15 /* Private */,
      17,    0,  323,    2, 0x08,   16 /* Private */,
      18,    0,  324,    2, 0x08,   17 /* Private */,
      19,    0,  325,    2, 0x08,   18 /* Private */,
      20,    0,  326,    2, 0x08,   19 /* Private */,
      21,    0,  327,    2, 0x08,   20 /* Private */,
      22,    0,  328,    2, 0x08,   21 /* Private */,
      23,    1,  329,    2, 0x08,   22 /* Private */,
      25,    1,  332,    2, 0x08,   24 /* Private */,
      27,    1,  335,    2, 0x08,   26 /* Private */,
      29,    0,  338,    2, 0x08,   28 /* Private */,
      30,    0,  339,    2, 0x08,   29 /* Private */,
      31,    0,  340,    2, 0x08,   30 /* Private */,
      32,    1,  341,    2, 0x08,   31 /* Private */,
      34,    1,  344,    2, 0x08,   33 /* Private */,
      35,    1,  347,    2, 0x08,   35 /* Private */,
      37,    0,  350,    2, 0x08,   37 /* Private */,
      38,    0,  351,    2, 0x08,   38 /* Private */,
      39,    1,  352,    2, 0x08,   39 /* Private */,
      40,    0,  355,    2, 0x08,   41 /* Private */,
      41,    0,  356,    2, 0x08,   42 /* Private */,
      42,    0,  357,    2, 0x08,   43 /* Private */,
      43,    0,  358,    2, 0x08,   44 /* Private */,
      44,    0,  359,    2, 0x08,   45 /* Private */,
      45,    0,  360,    2, 0x08,   46 /* Private */,
      46,    0,  361,    2, 0x08,   47 /* Private */,
      47,    0,  362,    2, 0x08,   48 /* Private */,
      48,    0,  363,    2, 0x08,   49 /* Private */,
      49,    0,  364,    2, 0x08,   50 /* Private */,
      50,    0,  365,    2, 0x08,   51 /* Private */,
      51,    0,  366,    2, 0x08,   52 /* Private */,
      52,    0,  367,    2, 0x08,   53 /* Private */,
      53,    0,  368,    2, 0x08,   54 /* Private */,
      54,    0,  369,    2, 0x08,   55 /* Private */,
      55,    0,  370,    2, 0x08,   56 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shownote(); break;
        case 1: _t->shownotepad(); break;
        case 2: _t->showcet(); break;
        case 3: _t->showlogin(); break;
        case 4: _t->showwords(); break;
        case 5: _t->showgaopin(); break;
        case 6: _t->receivelogin(); break;
        case 7: _t->on_add_clicked(); break;
        case 8: _t->on_view_clicked(); break;
        case 9: _t->on_delete_2_clicked(); break;
        case 10: _t->newDocument(); break;
        case 11: _t->open(); break;
        case 12: _t->save_As(); break;
        case 13: _t->print(); break;
        case 14: _t->exit(); break;
        case 15: _t->copy(); break;
        case 16: _t->cut(); break;
        case 17: _t->paste(); break;
        case 18: _t->undo(); break;
        case 19: _t->redo(); break;
        case 20: _t->selectFont(); break;
        case 21: _t->setFontBold((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->setFontUnderline((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->setFontItalic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->about(); break;
        case 25: _t->updateResult(); break;
        case 26: _t->on_pushButton_translate_clicked(); break;
        case 27: _t->on_comboBox_Level_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->on_comboBox_origin_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_radioButton_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->on_pushButton_open_clicked(); break;
        case 31: _t->on_pushButton_save_clicked(); break;
        case 32: _t->on_comboBox_target_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_pushButton_change_clicked(); break;
        case 34: _t->on_actionEnglish_triggered(); break;
        case 35: _t->on_actionChinese_triggered(); break;
        case 36: _t->on_pushButton_clicked(); break;
        case 37: _t->on_cet_clicked(); break;
        case 38: _t->on_pushButton_2_clicked(); break;
        case 39: _t->on_actioneditor_triggered(); break;
        case 40: _t->on_actiond_triggered(); break;
        case 41: _t->on_actiont_triggered(); break;
        case 42: _t->on_actions_triggered(); break;
        case 43: _t->on_actiondaoru_triggered(); break;
        case 44: _t->on_actiondaorchu_triggered(); break;
        case 45: _t->on_actiondanci_triggered(); break;
        case 46: _t->on_action10w_words_triggered(); break;
        case 47: _t->on_actionss_triggered(); break;
        case 48: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::shownote)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::shownotepad)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::showcet)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::showlogin)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::showwords)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::showgaopin)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::shownote()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::shownotepad()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::showcet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::showlogin()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::showwords()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::showgaopin()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
