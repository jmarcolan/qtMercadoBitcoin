#-------------------------------------------------
#
# Project created by QtCreator 2016-08-10T20:04:06
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtMercadoBitcoin
TEMPLATE = app


SOURCES += main.cpp\
        mercadobitcoin.cpp \
        qcustomplot.cpp

HEADERS  += mercadobitcoin.h \
         qcustomplot.h

FORMS    += mercadobitcoin.ui
