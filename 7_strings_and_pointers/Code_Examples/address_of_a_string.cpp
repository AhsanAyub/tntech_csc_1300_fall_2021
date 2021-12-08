#include <iostream>
using namespace std;

int main()
{
    string s = "HI!";
    
    // Print the address of a string
    printf("%p\n", &s);

    // Print the elements' addresses
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    return 0;
}