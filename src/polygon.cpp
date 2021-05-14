#include "polygon.h"
#include <iostream>
using namespace std;

void polygon::display()
{
    cout << "Number of sides= " << no_sides << endl;
    if (no_sides == 3)
    {
        cout << "It is a Triangle" << endl;
        cout << "The centroid = (" << centroid.x << "," << centroid.y << ")" << endl;
    }
    else if(no_sides == 4)
    {
        cout << "It is a Rectangle" << endl;
        cout << "The centroid = (" << centroid.x << "," << centroid.y << ")" << endl;
    }
}

void polygon::move()
{
    double x,y;
    cout << "Enter X-distance to move: ";
    cin >> x;
    cout << "Enter Y-distance to move: ";
    cin >> y;

    centroid.x = centroid.x + x;
    centroid.y = centroid.y + y;
}

void polygon::display_new_location()
{
    cout << "The coordinates of new centroid location = (" << centroid.x << "," << centroid.y << ")" << endl;
}


