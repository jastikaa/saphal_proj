QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dashboard.cpp \
    dialog.cpp \
    login.cpp \
    love.cpp \
    main.cpp \
    mainwindow.cpp \
    mother.cpp \
    sister.cpp

HEADERS += \
    dashboard.h \
    dialog.h \
    login.h \
    love.h \
    mainwindow.h \
    mother.h \
    sister.h

FORMS += \
    dashboard.ui \
    dialog.ui \
    login.ui \
    love.ui \
    mainwindow.ui \
    mother.ui \
    sister.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
