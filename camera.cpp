#include "camera.h"

Camera::Camera(QObject *parent) : QObject(parent)
{
    _etat = 0;
    _rotX = -45.f;
    _rotY = -45.f;
    _ss = 1.f;

    _autoRotate = false;
}

int Camera::getEtat()
{
    return _etat;
}

void Camera::setEtat(int state)
{
    _etat = state;
}

float Camera::getRotX()
{
    return _rotX;
}

void Camera::setRotX(float rotX)
{
    _rotX = rotX;
}

float Camera::getRotY()
{
    return _rotY;
}
void Camera::setRotY(float rotY)
{
    _rotY = rotY;
}

float Camera::getSS()
{
    return _ss;
}

void Camera::setSS(float ss)
{
    _ss = ss;
}

void Camera::rotateY()
{
    if(_autoRotate) _rotY += 1.f;
}

void Camera::switchAutoRotate()
{
    _autoRotate = !_autoRotate;
}
