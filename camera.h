#ifndef CAMERA_H
#define CAMERA_H

#include <QObject>
#include <QtCore>

class Camera : public QObject
{
    Q_OBJECT
public:
    explicit Camera(QObject *parent = 0);
    ~Camera();



    int etat = 0;
    float rotX = -45.0;
    float rotY = -45.0;
    float ss = 1.0f;
    bool toRot =true;
    


    void update();

signals:


public slots:
void rotateY();

private:





/*


*/

};

#endif // CAMERA_H
