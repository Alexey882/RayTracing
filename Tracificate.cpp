#define _USE_MATH_DEFINES
#include <limits>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cassert>
#include"geometry.h"
#include "Externalcharacter.h"
#include "Figure.h"
#include "draw.h"
#include "Create.h"
using namespace std;
int main() {
    Skin first(V(0.6, 0.2, 0.1));
    Skin second(V(0.5, 0.2, 0.8));
    vector<Sphere> spheres;
    spheres.push_back(Sphere(V(-10, -2, -19), 2, first));
    spheres.push_back(Sphere(V(7, 5, -15), 3, second));
    vector<Light> lights;
    lights.push_back(Light(V(0, 20, 20), 2.5));
    DRAW *d = new DRAW();
    d->render(spheres, lights);
    delete d;
    return 0;
}


