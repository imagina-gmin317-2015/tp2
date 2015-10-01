#include "camera.h"

Camera::Camera()
{
    etat = 0;
    rotX = -45.0;
    rotY = -45.0;
    ss = 1.0f;
    autoMove = false;
}

void Camera::setScale(float _delta) {
    ss = _delta;
}

void Camera::setEtat(int _etat) {
    etat = _etat;
}

void Camera::incrEtat() {
    etat++;
}

void Camera::setRotX(float _rotX) {
    rotX = _rotX;
}

void Camera::setRotY(float _rotY) {
    rotY = _rotY;
}

float Camera::getScale() {
    return ss;
}

int Camera::getEtat() {
    return etat;
}

float Camera::getRotX() {
    return rotX;
}

float Camera::getRotY() {
    return rotY;
}

void Camera::flipAutoMove() {
    autoMove = !autoMove;
}

bool Camera::isAutoMove() {
    return autoMove;
}
