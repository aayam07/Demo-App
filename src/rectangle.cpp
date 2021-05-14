#include "rectangle.h"

using namespace std;

rectangle::rectangle(point &p1,point &p2,point &p3,point &p4,short no_sides)
    {
        polygon::setsides(no_sides);

        breadth = p1.distancefrom(p2);
        length = p2.distancefrom(p3);
    }

    void rectangle::setcentroid()
    {
        double x_centroid = (length/2);
        double y_centroid = (breadth/2);
        point p;
        p.setcoordinates(x_centroid,y_centroid);
        
        centroid = p;
    }