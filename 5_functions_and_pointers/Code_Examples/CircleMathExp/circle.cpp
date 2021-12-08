#include <cmath>

// To compute the area of the circle given the radius
double Area(double radius)
{
    return (3.1416 * radius * radius);
}

// To compute the radius of a circle given the area
// Formula: Area = pi * r^2
// r = sqrt(area / pi)
double Radius(double area)
{
    return sqrt(area / 3.1416);
}

// To compute the diameter of the circle given the radius
double Diameter(double radius)
{
    return 2 * radius;
}