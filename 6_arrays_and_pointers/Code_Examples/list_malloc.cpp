#include <iostream>
#include <cstdlib>  // For the malloc
using namespace std;

int main()
{
    // Pointer variable named list is given three
    // contiguous memory slot (each 4 bytes) in the RAM
    int *list = (int*) malloc(3 * sizeof(int));

    if(list == NULL)
    {
        cerr << "Something went wrong in the memory allocation.\n";
        return -1;
    }

    // Initilize the contiguous memory slot
    list[0] = 10;   // Store 10 in the first given memory slot
    list[1] = 20;   // Store 20 in the second given memory slot
    list[2] = 30;   // Store 30 in the third given memory slot

    // Print the array
    for (int i = 0; i < 3; i++)
    {
        cout << list[i] << endl;
    }
}