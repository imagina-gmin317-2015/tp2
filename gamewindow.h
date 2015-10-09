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
    GameWindow(int);

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

    int getFps();

    void setCam(Camera*);

private:

    float const zoom = 0.1f;
    float const rotation = 1.0f;

    QTimer *timer;
    int fps;
    int m_frame;
    QImage m_image;
    point *p;


    int carte=1;

    Camera *cam;
    bool tourniquet = false;

};


#endif // GAMEWINDOW_H
