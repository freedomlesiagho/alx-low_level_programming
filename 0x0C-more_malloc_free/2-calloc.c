#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Dynamically allocate memory for an array
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);/* speace for array of nmemb elements each of size "size"*/
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;/* initializing whole block of empty space to zero */
	}
	return (array);
}
