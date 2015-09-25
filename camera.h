#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
public:
    bool autorotation = false;
    float rotX = -45.0;
    float rotY = -45.0;
    float ss = 1.0f;
    Camera();
    void autoRotate(float x, float y);
};

#endif // CAMERA_H
