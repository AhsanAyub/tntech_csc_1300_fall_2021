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
	// Prints the value of the variable n
	cout << *p << endl;
	
	return 0;
}