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
	// Prints the address of the variable n
	cout << p << endl;
	cout << *p << endl;
	cout << *p+10 << endl;

	*p = *p + 10;
	cout << *p << endl;
	cout << n << endl;
	
	return 0;
}