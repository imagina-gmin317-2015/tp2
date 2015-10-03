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

    Camera* cam = new Camera();

    GameWindow* win60 = new GameWindow(60);
    win60->setCamera(cam);
    win60->setFormat(format);
    win60->resize(640, 480);
    win60->show();
    win60->setAnimating(true);

    GameWindow* win120 = new GameWindow(120);
    win120->setCamera(cam);
    win120->setFormat(format);
    win120->resize(640, 480);
    win120->show();
    win120->setAnimating(true);

    GameWindow* win30 = new GameWindow(30);
    win30->setCamera(cam);
    win30->setFormat(format);
    win30->resize(640, 480);
    win30->show();
    win30->setAnimating(true);

    GameWindow* win = new GameWindow(1);
    win->setCamera(cam);
    win->setFormat(format);
    win->resize(640, 480);
    win->show();
    win->setAnimating(true);

    /*GameWindow window;
    window.setFormat(format);
    window.resize(640, 480);
    window.show();

    window.setAnimating(true);*/

    return app.exec();
}



