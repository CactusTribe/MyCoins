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
    dialog_modifyquantity.cpp \
    dialog_viewer.cpp \
    dialog_entry.cpp

HEADERS  += mainwindow.h \
    dialog_settings.h \
    dialog_modifyquantity.h \
    dialog_viewer.h \
    dialog_entry.h

FORMS    += mainwindow.ui \
    dialog_settings.ui \
    dialog_modifyquantity.ui \
    dialog_viewer.ui \
    dialog_entry.ui

RESOURCES += \
    resources.qrc
