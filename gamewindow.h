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
    GameWindow(Camera* camera, int fps);

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
    int m_fps=60;
    QImage m_image;
    QTimer* m_timer;
    Camera* m_camera;
    point *p;


    int carte=1;



};


#endif // GAMEWINDOW_H
