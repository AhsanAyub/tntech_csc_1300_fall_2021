#include <iostream>
using namespace std;

int main()
{
    // Declaration and intialization of a string
    // through {} and char notation
    char s1[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'}; 
    // Declaration and intialization of a string
    // through "" notation
    // Compiler will put '\0' (null character) at the end
    char s2[] = "Hi!";

    // Display the strings on screen
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
    
}