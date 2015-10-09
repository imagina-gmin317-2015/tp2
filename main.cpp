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

    int nextId = 0;

    GameWindow window1(1); GameWindow window2(30); GameWindow window3(60); GameWindow window4(120);
    window1.updateId(nextId); nextId++;
    window2.updateId(nextId); nextId++;
    window3.updateId(nextId); nextId++;
    window4.updateId(nextId); nextId++;

    Camera* cam = new Camera();
    window1.setCamera(cam);
    window2.setCamera(cam);
    window3.setCamera(cam);
    window4.setCamera(cam);


    /*QTimer* timer1; QTimer* timer2; QTimer* timer3; QTimer* timer4;
    timer1 = new QTimer(&window1);
    timer2 = new QTimer(&window2);
    timer3 = new QTimer(&window3);
    timer4 = new QTimer(&window4);

    timer1->connect(timer1, SIGNAL(timeout()), &window1, SLOT(renderNow()));
    timer2->connect(timer2, SIGNAL(timeout()), &window2, SLOT(renderNow()));
    timer3->connect(timer3, SIGNAL(timeout()), &window3, SLOT(renderNow()));
    timer4->connect(timer4, SIGNAL(timeout()), &window4, SLOT(renderNow()));

    timer1->start(1000/window1.getFrequency());
    timer2->start(1000/window2.getFrequency());
    timer3->start(1000/window3.getFrequency());
    timer4->start(1000/window4.getFrequency());*/

    window1.setFormat(format);
    window1.resize(640, 480);
    window1.show();
    window1.setAnimating(true);

    window2.setFormat(format);
    window2.resize(640, 480);
    window2.show();
    window2.setAnimating(true);

    window3.setFormat(format);
    window3.resize(640, 480);
    window3.show();
    window3.setAnimating(true);

    window4.setFormat(format);
    window4.resize(640, 480);
    window4.show();
    window4.setAnimating(true);


    return app.exec();
}



