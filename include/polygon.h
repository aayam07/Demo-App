#pragma once
#include "point.h"

class polygon
{
    protected:
    short no_sides;
    point centroid;
    public:
    //polygon() {} // default constructor
    //polygon(short no_sides) : no_sides(no_sides) {} // parametrized constructor

    void setsides(short no_sides)
    {
        this->no_sides = no_sides;
    }

    void display();
    void move();
    void display_new_location();

};