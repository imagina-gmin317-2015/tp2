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

    int freqs[] = {1,30,60,120};

    for(int i = 0; i < 4; i++){
        GameWindow* window = new GameWindow(freqs[i]);
        window->setCamera(camera);
        window->setFormat(format);
        window->resize(640, 480);
        window->show();

        window->setAnimating(true);
    }


    return app.exec();
}



