#include <iostream>
using namespace std;

struct Points
{
    int x;
    int y;
} point;

int main()
{
    Points *p = (Points *) malloc(sizeof(point));

    p->x = 10;
    p->y = 20;

    cout << p->x << "\t" << p->y << endl;
    return 0;
}