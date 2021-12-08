#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    while(true) // Infinite loop
    {
        // Loop terminating condition
        if(i >= 105)
            break;
        cout << i << endl;
        i++;
    }

    return 0;
}