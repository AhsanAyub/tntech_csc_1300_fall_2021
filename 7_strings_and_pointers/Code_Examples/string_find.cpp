#include <iostream>
using namespace std;

int main ()
{
    string str1 = "There are two needles in this haystack with needles.";
    string str2 = "needle";

    int found = str1.find(str2);
    if (found > 0)
        cout << "first 'needle' found at: " << found << endl;

    found = str1.find("haystack");
    if (found > 0)
        cout << "'haystack' also found at: " << found << endl;

    return 0;
}