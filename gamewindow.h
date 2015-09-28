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
    int m_refresh_rate; 		// Taux de rafraîchissement de la fenêtre.

    bool share_cam;				// Permet de savoir si la caméra est partagée par plusieurs instances.
    Camera* m_camera;			// Pointeur vers la caméra de la fenêtre.

    QTimer* m_timer;			// Timer permettant un rafraîchissement à temps fixe de la fenêtre.

    float speed;				// Vitesse de rotation du terrain selon l'axe y quand animate = true.
};


#endif // GAMEWINDOW_H
