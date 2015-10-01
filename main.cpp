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

    Camera* camera = new Camera();

    GameWindow window(camera,120);
    GameWindow window2(camera,60);
    GameWindow window3(camera,30);
    GameWindow window4(camera,1);
    window.setFormat(format);
    window2.setFormat(format);
    window3.setFormat(format);
    window4.setFormat(format);
    window.resize(640, 480);
    window2.resize(640, 480);
    window3.resize(640, 480);
    window4.resize(640, 480);
    window.show();
    window2.show();
    window3.show();
    window4.show();

    window.setAnimating(true);
    window2.setAnimating(true);
    window3.setAnimating(true);
    window4.setAnimating(true);

    int rst= app.exec();

    delete camera;
    return rst;
}



