#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 *@dest: pointer to destination string where content will be copied to
 * @src: pointer to source of data to be copied
 * @n: number of bytes to be copied
 * Return: pointer to destination dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /* counter */
	/* set loop to copy only n bytes */
	for (i = 0; i < n; i++)
		dest[i] = src[i]; /* copying src contents to dest memory space */
	return (dest); /* return pointer to dest */
}
