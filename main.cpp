#include "gamewindow.h"
#include "camera.h"

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

    Camera* cam = new Camera();

    GameWindow window0(120,cam);
    window0.setFormat(format);
    window0.resize(640, 480);
    window0.show();

    GameWindow window1(60,cam);
    window1.setFormat(format);
    window1.resize(640, 480);
    window1.show();

    GameWindow window2(30,cam);
    window2.setFormat(format);
    window2.resize(640, 480);
    window2.show();

    GameWindow window3(1,cam);
    window3.setFormat(format);
    window3.resize(640, 480);
    window3.show();

    window0.setAnimating(true);
    window1.setAnimating(true);
    window2.setAnimating(true);
    window3.setAnimating(true);

    return app.exec();
}



