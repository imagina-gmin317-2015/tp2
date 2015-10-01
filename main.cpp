#include "gamewindow.h"
#include "camera.h"
#include "camera.cpp"

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
    int frequences[] = {1,30,60,120};

    srand(time(NULL));
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    Camera* cam = new Camera();

    for(int i = 0; i<4;i++){
        GameWindow* window = new GameWindow(frequences[i]);
        window->setCamera(cam);
        window->setFormat(format);
        window->resize(640, 480);
        window->show();

        window->setAnimating(true);
    }
    return app.exec();
}



