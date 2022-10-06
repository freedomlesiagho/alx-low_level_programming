#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of intrgers
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: return a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, k;

	if (min > max)
	{
		return (NULL);
	}
	k = (max - min) + 1;
	array = malloc(k * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++, i++)
	{
		array[i] = min;
	}
	return (array);
}
