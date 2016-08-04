#-------------------------------------------------
#
# Project created by QtCreator 2015-06-23T01:12:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nienazwany9
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    burning.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    burning.h

FORMS    += mainwindow.ui \
    dialog.ui \
    burning.ui

SUBDIRS += \
    ../Goddd/Goddd.pro
