#include "triangle.h"

using namespace std;

triangle::triangle(point &p1,point &p2,point &p3,short no_sides)
    {
        polygon::setsides(no_sides);

        centroid_x = (p1.x + p2.x + p3.x) / 3;
        centroid_y = (p1.y + p2.y + p3.y) / 3;
    }

    void triangle::setcentroid()
    {
        point p;
        p.setcoordinates(centroid_x,centroid_y);
        
        centroid = p;
    }