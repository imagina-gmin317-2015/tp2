#include "camera.h"

Camera::Camera()
{
}

void Camera::rotation(float x, float y){
    if(this->autorotation){
        this->rotX += x;
        this->rotY += y;
    }
}
