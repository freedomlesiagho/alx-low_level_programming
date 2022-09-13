#include "main.h"

/**
 * print_sign - Check if a number is greater, equal or less than zero
 * @n: number to check
 *
 * Return: 1 if n is greater than 0, 0 if n is 0 and - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
