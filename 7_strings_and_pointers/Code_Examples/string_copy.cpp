#include <iostream>
using namespace std;
int main ()
{
    char buffer[20];
    string str = "Test string...";
    int length = str.copy(buffer,6,5);
    buffer[length]='\0';
    cout << "buffer contains: " << buffer << endl;
    return 0;
}