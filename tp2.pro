INCLUDEPATH += $$PWD
SOURCES += $$PWD/openglwindow.cpp \
    gamewindow.cpp
HEADERS += $$PWD/openglwindow.h \
    gamewindow.h \
    camera.h

SOURCES += \
    main.cpp

target.path = .
INSTALLS += target

RESOURCES += \
    gestionnaire.qrc

CONFIG += c++11
