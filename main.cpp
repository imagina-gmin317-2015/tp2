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

    Camera camera = Camera();

    GameWindow window(120, &camera);
    window.setFormat(format);
    window.resize(640, 480);
    window.show();
    window.setTitle("120 FPS");

    window.setAnimating(true);

//    GameWindow window2(60, &camera);
//    window2.setFormat(format);
//    window2.resize(640, 480);
//    window2.show();
//    window2.setTitle("60 FPS");


//    window.setAnimating(true);

//    GameWindow window3(30, &camera);
//    window3.setFormat(format);
//    window3.resize(640, 480);
//    window3.show();
//    window3.setTitle("30 FPS");


//    window.setAnimating(true);

//    GameWindow window4(1, &camera);
//    window4.setFormat(format);
//    window4.resize(640, 480);
//    window4.show();
//    window4.setTitle("1 FPS");


//    window4.setAnimating(true);

    return app.exec();
}



