#pragma once

class point
{
    public:

    double x;
    double y;
    // point(double x,double y) : this->x(x), this->y(y) {}
    void setcoordinates(double x,double y);
    //void getcoordinates();
    double distancefrom(const point &anotherpoint);
    // void add(int x_part,int y_part);
};