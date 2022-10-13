#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);
		if (string == NULL)
			printf("nil");
		printf("%s", string);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
