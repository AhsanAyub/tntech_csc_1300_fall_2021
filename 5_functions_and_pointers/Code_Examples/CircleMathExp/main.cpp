/*
    Write a C++ program that can compute the area of a circle (given
    the radius), the radius of a circle (given the area), the diameter
    of a circle (given the radius) using Functions.
*/

#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    double radius = 10.3;
    cout << "Area: "  << Area(radius)  << endl;

    double area = 24.3912;
    cout << "Radius: " << Radius(area) << endl;

    cout << "Diameter: " << Diameter(radius) << endl;

    return 0;
}