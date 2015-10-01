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
#include "camera.h"
using namespace std;


void createWindow(Camera* camera, float framerate) {
    QSurfaceFormat format;
    format.setSamples(16);

    GameWindow *w = new GameWindow(camera, framerate);
    w->setFormat(format);
    w->resize(640, 480);
    w->show();
    w->setAnimating(true);
}


int main(int argc, char **argv)
{
    srand(time(NULL));
    QGuiApplication app(argc, argv);

    Camera *c = new Camera();
    createWindow(c, 1.0f / 120.0f);
    createWindow(c, 1.0f / 60.0f);
    createWindow(c, 1.0f / 30.0f);
    createWindow(c, 1.0f / 1.0f);

    return app.exec();
}



