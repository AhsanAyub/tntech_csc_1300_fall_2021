#include <iostream>
#include <cstdlib>  // For the malloc
using namespace std;

int main()
{
    unsigned int arraySize;
    cout << "Size of the array? ";
    cin >> arraySize;

    // Pointer variable named list is given arraySize sized
    // contiguous memory slot (each 4 bytes) in the RAM
    // Dynamic memory allocation in the runtime of the program!!
    int *list = (int*) malloc(arraySize * sizeof(int));
    
    if(list == NULL)
    {
        cerr << "Something went wrong in the memory allocation.\n";
        return -1;
    }

    // Initilize the contiguous memory slots with incremental number
    for(int i = 0; i < arraySize; i++)
    {
        list[i] = i;
    }

    // Print the array
    for (int i = 0; i < arraySize; i++)
    {
        cout << list[i] << endl;
    }
}