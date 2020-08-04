#-------------------------------------------------
#
# Project created by QtCreator 2018-12-05T23:16:17
#
#-------------------------------------------------

QT += widgets core gui network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyFisrtWidget
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += D:\QTproject\test\MyFisrtWidget\debug\FS.dll

LIBS += D:\QTproject\test\MyFisrtWidget\debug\RC4.dll

LIBS += D:\QTproject\test\MyFisrtWidget\debug\RSA.dll

LIBS += D:\QTproject\test\MyFisrtWidget\debug\LFSR_J-K.dll

LIBS += D:\QTproject\test\MyFisrtWidget\debug\DH_MD5.dll

LIBS += D:\QTproject\test\MyFisrtWidget\debug\DES.dll

INCLUDEPATH += D:\QTproject\head

SOURCES += main.cpp\
        myfirstwidget.cpp

HEADERS  += myfirstwidget.h

FORMS    += myfirstwidget.ui

RESOURCES += \
    littleico.qrc

DISTFILES +=littleico.rc

RC_ICONS += iconfinder_Inkcontober_Squeak_2730365.ico
