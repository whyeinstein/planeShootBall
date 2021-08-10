#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include "flyobject.h"

class Bullet : public FlyObject
{
    Q_OBJECT
public:
    explicit Bullet(QObject *parent = nullptr);
    void init(double x,double y,double v_x,double v_y,double angle,double r,double m);
    double getAngle();

private:
    friend class Core;
    friend class Player;
    friend class DataStruct;
    double angle;
    void move();
signals:
    //子弹角度改变
//    void angleChanged(double angle);

public slots:
};

#endif // BULLET_H
