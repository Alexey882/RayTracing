#pragma once
#ifndef EXTERNAL_CHARACTER
#define EXTERNAL_CHARACTER
#include  "geometry.h"
class Light {
public:
    Light(const V& p, const double i) : position(p), intensity(i) {}
    V getPosition() {
        return position;
    }
    double getIntensity() {
        return intensity;
    }
private:
    V position;
    double intensity;
};

class Skin {
public:
    Skin(const V& color) : color(color) {}
    Skin() : color() {}
    V getColor() {
        return color;
    }
private:
    V color;

};
#endif