#include <iostream>
#include <cctype>
using namespace std;

void CaptilizeString(string &str)
{
    str[0] = toupper(str[0]);
}

int main()
{
    string msg = "this is CSC 1300-001";
    CaptilizeString(msg);
    cout << msg << endl;
    return 0;
}