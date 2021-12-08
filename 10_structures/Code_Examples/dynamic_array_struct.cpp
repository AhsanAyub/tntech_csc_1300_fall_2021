#include <iostream>
using namespace std;

struct Points
{
    int x;
    int y;
} point;

int main()
{
    Points *p = (Points *) malloc(10 * sizeof(point));

    for(int i = 0; i < 10; i++)
    {
        p[i].x = i;
        p[i].y = i * 10;
    }

    for(int i = 0; i < 10; i++)
        cout << p[i].x << "\t" << p[i].y << endl;
    
    free(p); // Free the allocated memory
    return 0;
}