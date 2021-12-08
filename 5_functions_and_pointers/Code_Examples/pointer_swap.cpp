#include <iostream>
using namespace std;

int main()
{
	// Declaration and initialization of
	// an int variable named a
	int a = 50, b = 100;
	// Pointer variable: 8-byte long
	// Points at the variable named a
	int *p = &a;
    // Points at the variable named b
    int *q = &b;
	
	// Prints the values of a and b respectively
    cout << a << " " << b << endl;

    // Swaping operations
    int temp = *p;	// temp stores 50
    *p = *q;		// *p and a are 100
    *q = temp;		// *q and b are 50
    
    // Prints the values of a and b respectively
    // After swaping them
    cout << a << " " << b << endl;
    
	return 0;
}