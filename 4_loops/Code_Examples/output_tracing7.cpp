#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            /*if(i % 2 == 0)
                continue;*/
            /*if(i == 4)
                break;*/
            cout << i * j << "\t";   
        }
        cout << endl;
    }
}