#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "openglwindow.h"
#include "gamecamera.h"
#include <QTimer>

struct point
{
    float x, y ,z;
};

class GameWindow : public OpenGLWindow
{
public:
    GameWindow(int fps, gamecamera* camera);

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

    void setCamera(gamecamera* camera);

    gamecamera* getCamera();

private:

    int m_frame;
    QImage m_image;
    point *p;

    int carte=1;
    gamecamera* m_camera;
    bool m_hasToRotate = false;
    QTimer* m_timer;
    int m_fps;
};


#endif // GAMEWINDOW_H
