#include <stdio.h>

int main()
{
	// Declaration and initialization of
	// an int variable named n
	int n = 50;
	// Pointer variable: 8-byte long
	// Points at the variable named n
	int *p = &n;
    // Prints the address of the variable n
	printf("%p\n", p);
	
	return 0;
}

/*
    $ gcc -o address_of_variable_using_pointer address_of_variable_using_pointer.c
    $ ./address_of_variable_using_pointer
*/