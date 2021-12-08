#include <iostream>
#include <string>   // Required for the string

using namespace std;

int main()
{
    // Declared a string variable to store the string
    string message;
    //const int MAX_LEGTH_OF_A_STRING = 256;

    // Asking the user to enter the message
    cin >> message;
    
    // assuming that message = "hello" (user gives hello from the terminal)

    // Under the assumption that the user inputs "hello"
    cout << message[0] << endl; // prints h
    cout << message[2] << endl; // prints l

    return 0;
}