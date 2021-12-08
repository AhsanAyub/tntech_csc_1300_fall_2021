#include <iostream>
using namespace std;

int main()
{
    char word[100];

    cout << "Enter a string: ";
    // Read a line of text from the user
    cin.get(word, 100);
    cout << word << endl;
    
    // Clear the buffer for the next input
    cin.ignore();

    cout << "Enter another string: ";
    // Read a line of text from the user
    cin.get(word, 100);
    cout << word << endl;    

    return 0;
}