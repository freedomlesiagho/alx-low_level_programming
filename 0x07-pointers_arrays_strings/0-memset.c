#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: pointer to the starting address of memory to be filled
 * @b: value to fill memory with
 * @n: number of bytes to be filled
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
