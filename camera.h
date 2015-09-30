#ifndef CAMERA_H
#define CAMERA_H

#include <QtGui/QOpenGLFunctions>

struct point{
    float x,y,z;
};

class Camera
{    
public:
    Camera();
    virtual void initialize();
    void rotate();
    void changeTexture();
    void scale();

    void setEtat(int etat);
    void setRot(float rotX, float rotY);
    void setScale(float ss);
    void rotation();
    void setRota(bool rota);

    bool getRota();

    int getEtat();


private:
    int etat = 0; // pour le changement d'affichage (point, triangles, surface pleine...)
    float rotX = -45.0; // angle de rotation de la camera sur l'axe des x
    float rotY = -45.0;// angle de rotation de la camera sur l'axe des y
    float ss = 1.0f;// zoom
    bool rota=true; // vrai si rotation active, faux sinon
};

#endif // CAMERA_H
