#ifndef CAMERA_H
#define CAMERA_H

#include <QObject>

class Camera : public QObject
{
    Q_OBJECT
private:
    int _etat;
    float _rotX;
    float _rotY;
    float _ss;

    bool _autoRotate;
public:
    explicit Camera(QObject *parent = 0);

    int getEtat();
    void setEtat(int);

    float getRotX();
    void setRotX(float);

    float getRotY();
    void setRotY(float);

    float getSS();
    void setSS(float);

    void switchAutoRotate();

signals:

public slots:
    void rotateY();
};

#endif // CAMERA_H
