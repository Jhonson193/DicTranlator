QT       += core gui sql network core5compat

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gaopin.cpp \
    main.cpp \
    mainwindow.cpp \
    login.cpp\
    note.cpp\
    regis.cpp\
    cet6.cpp\
    notepad.cpp \
    tenw_words.cpp
HEADERS += \
    gaopin.h \
    mainwindow.h\
    login.h\
    regis.h\
    note.h\
    cet6.h\
    tenw_words.h \
    ui_cet6.h\
    notepad.h

FORMS += \
    gaopin.ui \
    regis.ui\
    note.ui\
    login.ui\
    mainwindow.ui\
    cet6.ui\
    notepad.ui \
    tenw_words.ui
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc \
    image.qrc \
    notepad.qrc
