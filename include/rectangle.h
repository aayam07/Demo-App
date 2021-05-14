#pragma once
#include "polygon.h"

class rectangle:public polygon
{
protected:
double length;
double breadth;

    public:
    rectangle() {}
    rectangle(point &p1,point &p2,point &p3,point &p4,short no_sides);
    void setcentroid();
    
};