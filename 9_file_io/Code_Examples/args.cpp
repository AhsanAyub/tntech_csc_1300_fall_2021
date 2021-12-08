#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // argc -> first argument is the number of
    // command line arguments
    cout << argc << endl;

    // argv -> second argument is the list of
    // command line argument
    if(argc != 2)
    {
        return -1;
    }

    // An array of character pointers listing
    // all the arguments.
    for(int i = 0; i < argc; i++)
        cout << argv[i] << endl;

    return 0;
}