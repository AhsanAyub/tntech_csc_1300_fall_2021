#include <iostream>
using namespace std;

int number;

bool isOdd()
{
    if(number % 2 != 0)
        return true;
    else
        return false;
}

int main()
{
    number = 10;
    if(isOdd())
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;

    return 0;
}