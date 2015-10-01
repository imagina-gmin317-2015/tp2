#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "openglwindow.h"
#include "Camera.h"

struct point
{
    float x, y ,z;
};



class GameWindow : public OpenGLWindow
{
public:
    GameWindow(int fps, Camera* camera);

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

    Camera* m_camera;
    int m_frame;
    QImage m_image;
    point *p;
    int carte=1;
    bool m_isRotating;
    QTimer * m_timer;
    int m_fps;

};


#endif // GAMEWINDOW_H
