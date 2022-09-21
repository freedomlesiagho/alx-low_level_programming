#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, c;
	/* this loop get the length and last index of the destination string*/

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	/*
	 * This loop below append the source string to destination string
	 * Starting from the end of the destination string
	 * As far as source code is not a null charcter, it is added to dest
	 */

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
