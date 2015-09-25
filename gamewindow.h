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
    GameWindow(int refresh_rate, Camera* c = 0);
    ~GameWindow();

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

    void animWindow();
    void restartTimer();

private:

    int m_frame;
    QImage m_image;
    point *p;


    int carte;
    int m_refresh_rate;

    bool share_cam;
    Camera* m_camera;

    QTimer* m_timer;

    bool animate;
    float speed;
};


#endif // GAMEWINDOW_H
