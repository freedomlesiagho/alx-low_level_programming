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
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(array));
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
