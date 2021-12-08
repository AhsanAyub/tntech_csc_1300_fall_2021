#include <iostream>
using namespace std;

int main()
{
    char *s = "HI!";

    // Print out elements of the string
    cout << s[0] << endl;
    cout << s[1] << endl;
    cout << s[2] << endl;

    // Print out elements of the string
    // using pointer arithmatic
    cout << *(s+0) << endl;
    cout << *(s+1) << endl;
    cout << *(s+2) << endl;

    // Print out the entire string
    cout << s << endl;

    return 0;
}