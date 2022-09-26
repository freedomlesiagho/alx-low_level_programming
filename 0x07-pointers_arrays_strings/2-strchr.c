#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: string to be searched
 * @c: charcter to search for
 * Return: pointer to address of first occurence of c or
 * NULL if charcter not find
 */
char *_strchr(char *s, char c)
{
	int i; /*initiallizing counter */

	for (i = 0; s[i] != '\0'; i++)
		/* loop set up to search charcter as long as is not a null charcter */
	{
		if (s[i] == c)/* if character of interest is found */
		{
			return (s + i); /* return address to where character is found */

		}
	}
	return ('\0');
}
