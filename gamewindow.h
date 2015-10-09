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

    int getFrequency();
    void setCamera(Camera*);

    void updateId(int);
private:

    int m_frame;
    QImage m_image;
    point *p;


    int carte=1;

    Camera* cam;

    int frequency;
    static bool rotating;

    int id;

    QTimer* timer;
};


#endif // GAMEWINDOW_H
