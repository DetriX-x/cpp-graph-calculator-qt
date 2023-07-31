QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    helpwindow.cpp \
    main.cpp \
    calculator.cpp

HEADERS += \
    calculator.h \
    helpwindow.h

FORMS += \
    calculator.ui \
    helpwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Tell the qcustomplot header that it will be used as library:
DEFINES += QCUSTOMPLOT_USE_LIBRARY
# Link with debug version of qcustomplot if compiling in debug mode, else with release library:
CONFIG(debug, release|debug) {
  win32:QCPLIB = qcustomplotd2
  else: QCPLIB = qcustomplotd
} else {
  win32:QCPLIB = qcustomplot2
  else: QCPLIB = qcustomplot
}
LIBS += -L$$PWD/../libs -l$$QCPLIB

# muParser lib
unix:!macx: LIBS += -L$$PWD/../libs -lmuparser
INCLUDEPATH += $$PWD/../libs
DEPENDPATH += $$PWD/../libs


# enabling relative search of shared libraries --> IMPORTANT!!!!
QMAKE_LFLAGS += -Wl,-rpath,'../libs'

