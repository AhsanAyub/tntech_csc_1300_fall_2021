/**
 * The purpose of this program is to take a character from the user and
 * display whether the character is a vowel, a consonant, or unknown.
 * 
 * Last edited on Mon, Aug 30, 2021 at 16:39 (CDT)
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare a character variable to store the character from the user
    char character;
    cin >> character; // Allow the user to input a character

    // Convert the character to into its decimal
    int intOfCharacter = int(character);

    /*
        Decimal representation of ‘A’ is 65 and ‘Z’ is 90
        Decimal representation of ‘a’ is 97 and ‘z’ is 122
        We are going to check whether the converted value falls into the range.
    */
    if ((intOfCharacter >= 65 && intOfCharacter <= 90) || (intOfCharacter >= 97 && intOfCharacter <= 122))
    {
        // Checking for the lettter A or a
        if(character == 'A' || character == 'a')
        {
            cout << "vowel" << endl;
        }
        // Checking for the lettter E or e
        else if(character == 'E' || character == 'e')
        {
            cout << "vowel" << endl;
        }
        // Checking for the lettter I or i
        else if(character == 'I' || character == 'i')
        {
            cout << "vowel" << endl;
        }
        // Checking for the lettter O or o
        else if(character == 'O' || character == 'o')
        {
            cout << "vowel" << endl;
        }
        // Checking for the lettter U or u
        else if(character == 'U' || character == 'u')
        {
            cout << "vowel" << endl;
        }
        // All the vowels checking are done, and those conditions aren't true yet
        // Therefore, the character is a consonant
        else
        {
            cout << "consonant" << endl;
        }
    }
    else // This means the converted value is outside of the A-Z or a-z range, hence unknown.
    {
        cout << "unknown" << endl;
    }
    return 0;
}