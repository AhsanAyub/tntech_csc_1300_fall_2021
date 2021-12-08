#include <iostream>
using namespace std;

int main()
{
    // Define an array of size 3
    int list[3];
    
    // Initilize the elements of the array with int values
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;

    // Print the array
    for (int i = 0; i < 3; i++)
    {
        cout << list[i] << endl;
    }
}