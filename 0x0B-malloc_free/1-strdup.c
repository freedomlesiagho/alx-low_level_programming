#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 */

char *_strdup(char *str)
{
	char *copy_to;/*pointer to hold empytblock and copy content of str to*/
	int i, j, size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)/* loop to get length of str*/
	{

	}
	size = i + 1;/* plus 1 is to account for null charcter during copying*/
	copy_to = malloc(size * sizeof(char));
	if (copy_to == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)/*loop to copy str contents into copy_to*/
	{
		copy_to[j] = str[j];
	}
	return (copy_to);

}
