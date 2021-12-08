#include <iostream>
using namespace std;

void PrintArray(int *myArray, int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        cout << myArray[i] << endl;
    }
}

int main()
{
    // Define an array of size 3
    int list[3];

    // Initilize the elements of the array with int values
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;

    // Print the array
    PrintArray(list, 3);
    return 0;
}