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
    dialog_entry.cpp \
    dialog_addvaleur.cpp \
    dialog_addtype.cpp \
    dialog_addperiode.cpp \
    dialog_addmetal.cpp \
    dialog_addetat.cpp \
    dialog_addatelier.cpp

HEADERS  += mainwindow.h \
    dialog_settings.h \
    dialog_modifyquantity.h \
    dialog_viewer.h \
    dialog_entry.h \
    dialog_addvaleur.h \
    dialog_addtype.h \
    dialog_addperiode.h \
    dialog_addmetal.h \
    dialog_addetat.h \
    dialog_addatelier.h

FORMS    += mainwindow.ui \
    dialog_settings.ui \
    dialog_modifyquantity.ui \
    dialog_viewer.ui \
    dialog_entry.ui \
    dialog_addvaleur.ui \
    dialog_addtype.ui \
    dialog_addperiode.ui \
    dialog_addmetal.ui \
    dialog_addetat.ui \
    dialog_addatelier.ui

RESOURCES += \
    resources.qrc
