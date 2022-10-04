#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width of array
*@height: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **pointer;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pointer = malloc(height * sizeof(int *));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(width * sizeof(int));
		if (pointer[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(pointer[j]);
			free(pointer);
			return (NULL);
		}
		for (j =  0; j < width; j++)
		{
			pointer[i][j] = 0;
		}
	}
	return (pointer);
}
