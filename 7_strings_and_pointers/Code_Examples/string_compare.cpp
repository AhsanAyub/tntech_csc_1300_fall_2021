#include <iostream>
using namespace std;

int main ()
{
    string str1 = "Apple";
    string str2 = "apple";
    
    if (str1.compare(str2) == 0)
        cout << str1 << " is " << str2 << endl;
    else
        cout << str1 << " is not " << str2 << endl;

    if (str1.compare("Apple") == 0)
        cout << str1 << " is Apple" << endl;
    else
        cout << str1 << " is not Apple" << endl;

    return 0;
}