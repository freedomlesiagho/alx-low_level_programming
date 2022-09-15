#include "main.h"

/**
 * _isdigit - Checks for digit 0 to 9
 * @c: digit to check for
 * Return: 1 if digit is between 0 to 9 otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
