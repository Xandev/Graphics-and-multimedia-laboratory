#-------------------------------------------------
#
# Project created by QtCreator 2016-04-27T09:19:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Triangle Texturing
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    Canvas.cpp \
    Marker.cpp

HEADERS  += MainWindow.h \
    Canvas.h \ 
    Marker.h
	
FORMS    += MainWindow.ui

RESOURCES += \
    resources.qrc
