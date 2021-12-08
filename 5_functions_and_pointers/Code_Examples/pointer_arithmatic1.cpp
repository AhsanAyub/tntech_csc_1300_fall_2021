#include <iostream>
using namespace std;

int main()
{
	// Declaration and initialization of
	// an int variable named n
	int n = 50;
	// Pointer variable: 8-byte long
	// Points at the variable named n
	int *p = &n;
	
	// Prints the value of n varable
    cout << *p << endl;
    
    // Add the value of n varable with 5
    // Using the pointer variable
    *p = *p + 5;
    cout << n << endl;
	
	return 0;
}