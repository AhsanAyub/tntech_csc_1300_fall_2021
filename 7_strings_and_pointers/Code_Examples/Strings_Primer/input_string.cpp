#include <iostream>
#include <string>   // Required for the string

using namespace std;

int main()
{
    // Declared a string variable to store the string
    string message;
    //const int MAX_LEGTH_OF_A_STRING = 256;

    // Asking the user to enter the message
    //cin >> message;
    // Displaying the message
    // cout << message << endl;

    // Using the getline command to work with the entire message
    getline(cin, message);
    // Displaying the message
    cout << message << endl;

    return 0;
}