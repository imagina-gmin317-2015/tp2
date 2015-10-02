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
#include <QtDebug>
using namespace std;





int main(int argc, char **argv)
{

    srand(time(NULL));
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);


    Camera *cam  = new Camera();

    QTimer *timerC = new QTimer();

    timerC->connect(timerC, SIGNAL(timeout()),cam, SLOT(rotateY()));
    timerC->start(100);


    GameWindow window(cam, 1000);
    window.setFormat(format);
    window.resize(500, 350);
    window.show();

    window.setAnimating(true);




    GameWindow window2(cam,1000/ 30);
    window2.setFormat(format);
    window2.resize(500, 350);
    window2.show();

    window2.setAnimating(true);

    GameWindow window3(cam, 1000/60);
    window3.setFormat(format);
    window3.resize(500, 350);
    window3.show();

    window3.setAnimating(true);

    GameWindow window4(cam,1000/ 120);
    window4.setFormat(format);
    window4.resize(500, 350);
    window4.show();

    window4.setAnimating(true);



    return app.exec();
}



