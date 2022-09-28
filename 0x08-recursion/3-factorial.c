#include "main.h"

/**
 *  factorial -  function that returns the factorial of a given number.
 *  @n: number we want to find the factoria of.
 *  Return: -1 if n is less than 0.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
