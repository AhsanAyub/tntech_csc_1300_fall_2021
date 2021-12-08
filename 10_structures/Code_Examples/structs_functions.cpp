#include <iostream>
using namespace std;

struct Points
{
    int x;
    int y;
};

Points BuildPoint(int a, int b)
{
    Points temp;
    temp.x = a;
    temp.y = b;
    return temp;
}

void DisplayPoints(Points p)
{
    cout << p.x << "\t" << p.y << endl;
}

int main()
{
    Points point;
    point = BuildPoint(5, 7);
    DisplayPoints(point);
    return 0;
}