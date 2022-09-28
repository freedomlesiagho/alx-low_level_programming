#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to a string.
 *
 * Return: No return.
 */
void _print_rev_recursion(char *s)
{
	/* if NULL char then, terminate the recursive call */
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1); /* recursively store all adreess */

	_putchar(*s);/* print each char from the last call */
}
