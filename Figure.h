#pragma once
#ifndef FIGURE_H
#define FIGURE_H
#include "geometry.h"
#include "Externalcharacter.h"
#include <iostream>
using namespace std;
class Figure {
protected:
    V center;
    double radius;
    Skin skin;
    Figure(const V& c, const double r, const Skin& s) :center(c), radius(r), skin(s) {}
    virtual bool ray_intersect(V& orig, V& dir, double& t0) {
        cout << "Create a figure" << endl;
        return false;
    }
};
#endif