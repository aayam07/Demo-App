#pragma once
#include "polygon.h"

class triangle:public polygon
{
protected:
double centroid_x;
double centroid_y;

    public:
    triangle() {}
    triangle(point &p1,point &p2,point &p3,short no_sides);
   
    void setcentroid();
    
};