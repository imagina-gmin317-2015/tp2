#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "openglwindow.h"
#include "camera.h"


struct point
{
    float x, y ,z;
};



class GameWindow : public OpenGLWindow
{
public:
    GameWindow();
    GameWindow(int frequence);

    void setCamera(Camera *cam);
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

private:

    int m_frame;
    QImage m_image;
    point *p;
    Camera *cam;
    QTimer *timer;


    int carte=1;

    int etat = 0;
    int frequence = 0;

};


#endif // GAMEWINDOW_H
