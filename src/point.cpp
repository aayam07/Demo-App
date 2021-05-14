#include "point.h"
#include <iostream>
#include<cmath>
using namespace std;

void point::setcoordinates(double x,double y)
{
    this->x = x;
    this->y = y;
}

double point::distancefrom(const point &anotherpoint)
{
    double sq_xdiff = pow(anotherpoint.x - this->x, 2);
    double sq_ydiff = pow(anotherpoint.y - this->y, 2);

    return sqrt(sq_xdiff + sq_ydiff);
}