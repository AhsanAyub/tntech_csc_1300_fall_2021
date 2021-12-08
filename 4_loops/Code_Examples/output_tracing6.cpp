#include <iostream>
using namespace std;

int main()
{
    for(int i = 3; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            //cout << "*";
            //cout << i;
            cout << j;
            // if(j % 2 != 0)
            //    cout << j;
        }
        cout << endl;
    }
    return 0;
}