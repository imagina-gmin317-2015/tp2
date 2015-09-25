#include "camera.h"

Camera::Camera()
{
}
void Camera::autoRotate(float x, float y){
    if(this->autorotation){
        this->rotX += x;
        this->rotY += y;
    }
}

