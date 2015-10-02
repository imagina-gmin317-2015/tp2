#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "openglwindow.h"
#include "camera.h"
#include <QTimer>

struct point
{
    float x, y ,z;
};



class GameWindow : public OpenGLWindow
{

public:
    GameWindow();
    GameWindow(Camera *camera, int f);

    void initialize();
    void render();
    bool event(QEvent *event);

    void keyPressEvent(QKeyEvent *event);

    void displayTriangles();
    void displayLines();
    void displayTrianglesC();
    void displayPoints();
    void displayTrianglesTexture();

    void displayColor(float);

    void loadMap(QString localPath);
    Camera *cam;


private:

    int m_frame;
    QImage m_image;
    point *p;


    int carte=1;


    /*
    int etat = 0;
    float rotX = -45.0;
    float rotY = -45.0;
    float ss = 1.0f;
    */

    int freq=150;
    QTimer *timer;
};


#endif // GAMEWINDOW_H
