#ifndef CAMERA_H
#define CAMERA_H

#include "gamewindow.h"

class Camera{
public:
    bool autorotation = false;
    float rotX = -45.0;
    float rotY = -45.0;
    float ss = 1.0f;
    Camera();
    void rotation(float x, float y);
};

#endif // CAMERA_H
