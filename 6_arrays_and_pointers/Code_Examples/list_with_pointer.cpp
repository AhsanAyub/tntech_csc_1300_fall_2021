#include <iostream>
using namespace std;

int main()
{
    // Define an array of size 3
    int list[3];
    // Pointer variable ptr is now pointing at
    // the first element of the array
    int *ptr = list;

    // Initilize the elements of the array with int values
    ptr[0] = 10;        // same as *(ptr+0) = 10;
    ptr[1] = 20;        // same as *(ptr+1) = 20;
    ptr[2] = 30;        // same as *(ptr+2) = 30;

    // Print the array
    for (int i = 0; i < 3; i++)
    {
        cout << list[i] << endl;
    }
}