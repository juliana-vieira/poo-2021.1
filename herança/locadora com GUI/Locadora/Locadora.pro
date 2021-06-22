QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Filme.cpp \
    Jogo.cpp \
    Locadora.cpp \
    dlgfilme.cpp \
    dlgjogo.cpp \
    dlgselecionaritem.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../../Desktop/Nova pasta (2)/inferno/Filme.h \
    Filme.h \
    IAlugavel.h \
    Jogo.h \
    Locadora.h \
    dlgfilme.h \
    dlgjogo.h \
    dlgselecionaritem.h \
    item.h \
    mainwindow.h

FORMS += \
    dlgfilme.ui \
    dlgjogo.ui \
    dlgselecionaritem.ui \
    mainwindow.ui

TRANSLATIONS += \
    INFERNO_pt_BR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
