#include <stdio.h>

int main()
{
	// Declaration and initialization of
	// an int variable named n
	int n = 50;
	// Prints the variable’s value
	printf("%p\n", &n);
	
	return 0;
}

/*
    $ gcc -o address_of_variable address_of_variable.c
    $ ./address_of_variable
*/