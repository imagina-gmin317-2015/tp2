#ifndef CAMERA_H
#define CAMERA_H


class Camera
{
private:

    int etat;
    float rotX;
    float rotY;
    float ss;
    bool autoMove;

public:
    Camera();
    void setScale(float _delta);
    void setEtat(int _etat);
    void setRotX(float _rotX);
    void setRotY(float _rotY);
    void incrEtat();
    void flipAutoMove();

    bool isAutoMove();
    float getScale();
    int getEtat();
    float getRotX();
    float getRotY();

//public slots:
};

#endif // CAMERA_H
