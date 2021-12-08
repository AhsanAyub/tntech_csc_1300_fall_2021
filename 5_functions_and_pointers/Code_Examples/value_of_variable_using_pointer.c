#include <stdio.h>

int main()
{
	// Declaration and initialization of
	// an int variable named n
	int n = 50;
	// Pointer variable: 8-byte long
	// Points at the variable named n
	int *p = &n;
	// Prints the value of the variable n
	printf("%i\n", *p);
	
	return 0;
}

/*
    $ gcc -o value_of_variable_using_pointer value_of_variable_using_pointer.c
    $ ./value_of_variable_using_pointer
*/