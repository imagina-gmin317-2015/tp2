#include "gamewindow.h"

#include <QtGui/QGuiApplication>
#include <QtGui/QMatrix4x4>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QScreen>

#include <QtCore/qmath.h>
#include <QMouseEvent>
#include <QKeyEvent>
#include <time.h>
#include <sys/time.h>
#include <iostream>

#include <QtCore>
#include <QtGui>
using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL));
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    gamecamera* camera = new gamecamera();

    GameWindow window (120, camera);
    window.setFormat(format);
    window.resize(640, 480);
    window.show();
    window.setAnimating(true);

    /*GameWindow window2 (60, camera);
    window2.setFormat(format);
    window2.resize(320, 240);
    window2.show();
    window2.setAnimating(true);

    GameWindow window3 (30, camera);
    window3.setFormat(format);
    window3.resize(320, 240);
    window3.show();
    window3.setAnimating(true);

    GameWindow window4 (1, camera);
    window4.setFormat(format);
    window4.resize(320, 240);
    window4.show();
    window4.setAnimating(true);*/

    return app.exec();
}



