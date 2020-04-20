#pragma once
#ifndef CREATE_H
#define CREATE_H
#include "Externalcharacter.h"
#include "Figure.h"
class Sphere :protected Figure {
public:
    Sphere(const V& c, const double r, const Skin& s) :Figure(c, r, s) {}
    V getCenter() {
        return center;
    }
    Skin getSkin() {
        return skin;
    }
    double getRadius() {
        return radius;
    }
    virtual bool ray_intersect(V& orig, V& dir, double& t0) override
    {
        V L = getCenter() - orig;
        double tca = L * dir;
        double d2 = L * L - tca * tca;
        if (d2 > getRadius() * getRadius())
            return false;
        double thc = sqrtf(getRadius() * getRadius() - d2);
        t0 = tca - thc;
        double t1 = tca + thc;
        if (t0 < 0) t0 = t1;
        if (t0 < 0) return false;
        return true;
    }

};
#endif