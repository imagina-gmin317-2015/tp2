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

    Camera *camera = new Camera();

    QTimer *timer = new QTimer();
    timer->connect(timer, SIGNAL(timeout()), camera, SLOT(rotateY()));
    timer->start(1000/60); //60 fps

    GameWindow window(camera, 1000/120); //120 fps
    window.setFormat(format);
    window.resize(640, 480);
    window.show();
    window.setAnimating(true);

    GameWindow window2(camera, 1000/60);
    window2.setFormat(format);
    window2.resize(640, 480);
    window2.show();
    window2.setAnimating(true);

    GameWindow window3(camera, 1000/30);
    window3.setFormat(format);
    window3.resize(640, 480);
    window3.show();
    window3.setAnimating(true);

    GameWindow window4(camera, 1000);
    window4.setFormat(format);
    window4.resize(640, 480);
    window4.show();
    window4.setAnimating(true);

    return app.exec();
}



