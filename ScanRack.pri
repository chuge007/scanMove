INCLUDEPATH += $$PWD/

QT       += core gui serialbus


HEADERS += \
    $$PWD/TaiDa/scancontroltaida.h \
    $$PWD/HuiChuan/scancontrolhuichuan.h \
    $$PWD/scancontrolabstract.h \
    $$PWD/scancontrolclass.h \
    $$PWD/scanrackthread.h

SOURCES += \
    $$PWD/TaiDa/scancontroltaida.cpp \
    $$PWD/HuiChuan/scancontrolhuichuan.cpp \
    $$PWD/scancontrolclass.cpp \
    $$PWD/scanrackthread.cpp


