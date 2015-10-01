INCLUDEPATH += $$PWD
SOURCES += $$PWD/openglwindow.cpp \
    gamewindow.cpp \
    gamecamera.cpp
HEADERS += $$PWD/openglwindow.h \
    gamewindow.h \
    gamecamera.h

SOURCES += \
    main.cpp

target.path = .
INSTALLS += target

RESOURCES += \
    gestionnaire.qrc
