#include <iostream>
using namespace std;

int main()
{
    string str1 = "104";
    int val1 = stoi(str1);

    long long val2 = -2153156942601347941;
    string str2 = to_string(val2);

    cout << val1 << endl;
    cout << str2 << endl;
    
    return 0;
}