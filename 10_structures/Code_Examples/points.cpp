#include <iostream>
#include <cmath>
using namespace std;

struct Points
{
    int x;
    int y;
};

int main()
{
    Points p1, p2;

    p1.x = 3;
    p1.y = 2;
    p2.x = 5;
    p2.y = 6;

    double distance;
    distance = pow((p2.x - p1.x), 2);
    distance += pow((p2.y - p1.y), 2);
    distance = sqrt(distance);

    cout << distance << endl;

    cout << &p1.x << endl;
    cout << &p1.y << endl;
    cout << &p2.x << endl;
    cout << &p2.y << endl;

    return 0;
}