#ifndef CAMERA
#define CAMERA

class Camera
{
public :
    int getEtat(){
        return etat;
    }
    float getRotX(){
        return rotX;
    }
    float getRotY(){
        return rotY;
    }
    float getSS(){
        return ss;
    }
    void setEtat(int i){
        etat = i;
    }
    void setRotX(float f){
        rotX = f;
    }
    void setRotY(float f){
        rotY = f;
    }
    void setSS(float f){
        ss = f;
    }

    void sceneRotation(bool rotating){
        if(rotating){
            setRotY(getRotY() - 0.10f);
        }
    }


private :
    int etat = 0;
    float rotX = -45.0;
    float rotY = -45.0;
    float ss = 1.0f;
};

#endif // CAMERA

