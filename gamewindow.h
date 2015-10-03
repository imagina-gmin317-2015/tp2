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
    GameWindow(Camera *camera, int freq);

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


    int carte=1;

    Camera *_camera;
    int _freq;
    QTimer *_timer;

};


#endif // GAMEWINDOW_H
