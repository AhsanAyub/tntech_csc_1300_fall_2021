#include <iostream>
#include <cstdlib>  // For the malloc and realloc
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
    
    /*
        I cannot do that as the following statement will access
        the 4th element of the array and the size of the array is 3.
    */
    // list[3] = 40; 

    // For us to do that, we need to create dynamically create
    // an array with a size of 4 with realloc() function
    int *temp = (int*) realloc(list, 4 * sizeof(int));
    if(temp == NULL)
    {
        cerr << "Something went wrong in the memory allocation.\n";
        return -1;
    }
    // We now no longer need to copy the other elements
    temp[3] = 40;   // Job done!!
    // Let's now point the temp array via the list pointer
    list = temp;

    // Print the array
    for (int i = 0; i < 4; i++)
    {
        cout << list[i] << endl;
    }
}