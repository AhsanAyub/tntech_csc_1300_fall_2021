#include <iostream>
using namespace std;

void Increment(int *x)
{
    //cout << &x << endl;
    *x += 1;
    cout << "x in Increment: " << *x << endl;
}

int main()
{
    int a = 3;
    //cout << &a << endl;
    Increment(&a);
    cout << "a in Main: " << a << endl;
}