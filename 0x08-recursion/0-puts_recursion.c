#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: pointer to the string to print.
 *
 * Return: No return.
 */
void _puts_recursion(char *s)
{
	/* if not NULL char, ignore the if statement and go to next */
	if (*s == '\0')
	{
		_putchar('\n'); /* if is NULL print new line */
		return; /* And end the recursive call */
	}

	_putchar(*s);

	_puts_recursion(s + 1); /* Recursive call to contnue printing each charcter */
}
