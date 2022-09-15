#include "main.h"

/**
 * _isupper - Checks for upper case letter
 * @c: letter to check for
 * Return: 1 for uppercaase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
