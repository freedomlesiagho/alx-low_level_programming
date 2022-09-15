#include "main.h"

/**
 * print_diagonal - Prints diagonal lines
 * @n: Number of diagonal to print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int num;

		for (num = 1; num <= n; num++)
			_putchar('\\');
		_putchar('\n');
	}
}
