#include <iostream>
using namespace std;

struct Points
{
    int x;
    int y;
};

int main()
{
    // p is the pointer variable of structure
    Points *p, point;
    // p is pointing to a regular structure variable
    p = &point;
    // Access the structure data with pointer and
    // -> notation. (*p).x and (*p).y would work too.
    p->x = 10;
    p->y = 20;
    // Displaying the values of the elements
    cout << p->x << "\t" << p->y << endl;
    return 0;
}