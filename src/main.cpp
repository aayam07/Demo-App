
#include "rectangle.h"
#include "triangle.h"

#include<iostream>
using namespace std;

int main()
{
    point p1; 
    p1.setcoordinates(1,6);

    point p2; 
    p2.setcoordinates(1,2);

    point p3;
    p3.setcoordinates(6,2);

    point p4;
    p4.setcoordinates(6,6);

    rectangle r1(p1,p2,p3,p4,4);
    r1.setcentroid();
    r1.display();
    r1.move();
    r1.display_new_location();

    cout << "\n";
    triangle t1(p1,p2,p3,3);
    t1.setcentroid();
    t1.display();
    t1.move();
    t1.display_new_location();


    // git hub-learning (changes)
    cout << "hello world";

    cout << "hello from branch 1";

    cout << "High guys";

    cout << "High-Five";

    cout << "hey hey hey";


}

