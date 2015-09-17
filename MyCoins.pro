#-------------------------------------------------
#
# Project created by QtCreator 2015-09-17T15:18:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyCoins
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_settings.cpp \
    dialog_new.cpp \
    dialog_update.cpp

HEADERS  += mainwindow.h \
    dialog_settings.h \
    dialog_new.h \
    dialog_update.h

FORMS    += mainwindow.ui \
    dialog_settings.ui \
    dialog_new.ui \
    dialog_update.ui

RESOURCES += \
    resources.qrc
