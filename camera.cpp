#include "camera.h"

Camera::Camera()
{
}

void Camera::initialize(){

}

void Camera::rotate(){
    glRotatef(this->rotX,1.0f,0.0f,0.0f);
    glRotatef(this->rotY,0.0f,0.0f,1.0f);
}


/*void Camera::changeTexture(){

    switch(this->etat)
    {
    case 0:
        displayPoints();
        break;
    case 1:
        displayLines();
        break;
    case 2:
        displayTriangles();
        break;
    case 3:
        displayTrianglesC();
        break;
    case 4:
        displayTrianglesTexture();
        break;
    case 5:

        displayTrianglesTexture();
        displayLines();
        break;
    default:
        displayPoints();
        break;
    }
}*/

void Camera::rotation(){
    setRot(0,1.0f);
    rotate();
}


void Camera::scale(){
    glScalef(this->ss,this->ss,this->ss);
}

void Camera::setEtat(int etat){
    this->etat = etat;
}

void Camera::setRot(float rotX, float rotY){
    this->rotX += rotX;
    this->rotY += rotY;
}

void Camera::setScale(float ss){
    this->ss += ss;
}

int Camera::getEtat(){
    return this->etat;
}
