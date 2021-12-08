#include <iostream>
using namespace std;

int main()
{
    string message;

    cout << "Enter a string: ";
    // Read a line of text from the user
    getline(cin, message);
    cout << message << endl;
    
    // Clear the buffer for the next input
    cin.clear();

    cout << "Enter another string: ";
    // Read a line of text from the user
    getline(cin, message);
    cout << message << endl;    

    return 0;
}