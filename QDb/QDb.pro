#-------------------------------------------------
#
# Project created by QtCreator 2014-03-20T18:16:15
#
#-------------------------------------------------

QT       += core gui\
            dbview.ui

TARGET = QDb
TEMPLATE = app


SOURCES += main.cpp\
    dbview.cpp \
    loadFieldElettro.cpp \
    dbcontrol.cpp \
    elettrodomestico.cpp \
    frigorifero.cpp \
    lavastoviglie.cpp \
    SmartElettroPtr.cpp \
    dbmodel.cpp \
    outputform.cpp \
    editform.cpp \
    outfrigoview.cpp \
    outlavastview.cpp

HEADERS  += dbview.h \
    Container.h \
    loadFieldElettro.h \
    SmartElettroPtr.h \
    lavastoviglie.h \
    frigorifero.h \
    elettrodomestico.h \
    dbcontrol.h \
    dbmodel.h \
    outputform.h \
    editform.h \
    outfrigoview.h \
    outlavastview.h \
    err_sint.h

FORMS    += dbview.ui \
    outputform.ui \
    editform.ui \
    outfrigoview.ui \
    outlavastview.ui

OTHER_FILES +=
