#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;/* initialize length counter */

	if (*s)/* as long as its a charcter in the string */
	{
		len++; /* new length is now 1 */
		len += _strlen_recursion(s + 1);
		/**
		 * what the last  statement mean is that:
		 * whenever the recursive function move to the address of
		 * of the next charcter; add one to len since it move once
		 * each time.
		 */
	}

	return (len);
}
