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
    dialog_settings.cpp

HEADERS  += mainwindow.h \
    dialog_settings.h

FORMS    += mainwindow.ui \
    dialog_settings.ui

RESOURCES += \
    resources.qrc
