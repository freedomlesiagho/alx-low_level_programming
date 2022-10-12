#include "function_pointers.h"

/**
 * print_name - Function to print a name
 * @name: Name to print
 * @f: pointer to a function to be called ato a print name
 */

void print_name(char *name, void (*f)(char *))
{
	/*
	 * defernce pointer to access the function pointed to by it and pass
	 * the parameter "name" to it
	 */
	f(name); /* same as (*f)(name) */
}
