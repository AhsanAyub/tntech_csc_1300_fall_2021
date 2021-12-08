#include <iostream>
using namespace std;

void DisplayMessage(string msg)
{
    cout << msg << endl;
}

string BuildString(string name)
{
    string str = "Your name is " + name;
    return str;
}

int main()
{
    string str = "This is CSC 1300-001T";
    DisplayMessage(str);

    string str1 = BuildString("Ahsan");
    DisplayMessage(str1);

    return 0;
}