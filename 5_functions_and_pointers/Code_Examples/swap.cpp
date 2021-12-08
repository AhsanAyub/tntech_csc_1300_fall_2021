#include <iostream>
using namespace std;

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    // Display the values of a and b variables
    cout << a << " " << b << endl;
    
    Swap(&a, &b);
    // Display the values of a and b variables after
    // the Swap function is invoked.
    cout << a << " " << b << endl;
    
    return 0;
}