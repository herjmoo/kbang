######################################################################
# Automatically generated by qmake (2.01a) Mon Sep 1 03:56:07 2008
######################################################################

TEMPLATE = app

# Input
HEADERS += gameloop.h \
 connecttoserverdialog.h \
 mainwindow.h \
 serverconnection.h \
 serverquery.h \
 common.h \
 xmlnode.h \
 joingamedialog.h \
 logwidget.h \
 chatwidget.h
FORMS += connecttoserverdialog.ui mainwindow.ui \
 joingamedialog.ui \
 logwidget.ui \
 chatwidget.ui
SOURCES += gameloop.cpp main.cpp \
 connecttoserverdialog.cpp \
 mainwindow.cpp \
 serverconnection.cpp \
 serverquery.cpp \
 common.cpp \
 xmlnode.cpp \
 joingamedialog.cpp \
 logwidget.cpp \
 chatwidget.cpp

QT += network \
 xml

RESOURCES += client.qrc

INCLUDEPATH += ../common

LIBS += ../common/libcommon.a

TARGETDEPS += ../common/libcommon.a
