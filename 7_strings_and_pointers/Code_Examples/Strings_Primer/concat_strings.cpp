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
    message = "hello";
    

    // Under the assumption that the user inputs "hello"
    string concatMessage; //= message + ", there!";
    concatMessage = message + ", there!";
    
    cout << concatMessage << endl;

    string concatCharacters = "";
    concatCharacters = concatCharacters + message[0];   //  concatCharacters = "h"
    concatCharacters += message[2];  //  concatCharacters = "hl"
    cout << concatCharacters << endl;

    return 0;
}