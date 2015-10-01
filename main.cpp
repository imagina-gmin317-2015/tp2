#include "gamewindow.h"
#include "Camera.h"

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

    Camera* camera = new Camera();

    QSurfaceFormat format;
    format.setSamples(16);

    GameWindow window(120,camera);
    window.setFormat(format);
    window.resize(640, 480);
    window.show();

    window.setAnimating(true);

    GameWindow window1(60,camera);
    window1.setFormat(format);
    window1.setTitle("60 Fps");
    window1.resize(640, 480);
    window1.show();

    window1.setAnimating(true);

    GameWindow window2(30,camera);
    window2.setTitle("30 Fps");
    window2.setFormat(format);
    window2.resize(640, 480);
    window2.show();

    window2.setAnimating(true);

    GameWindow window3(1,camera);
    window3.setFormat(format);
    window3.setTitle("1 Fps");
    window3.resize(640, 480);
    window3.show();

    window3.setAnimating(true);

    return app.exec();
}



