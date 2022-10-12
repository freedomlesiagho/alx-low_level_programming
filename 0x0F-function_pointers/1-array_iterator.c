#include "function_pointers.h"

/**
 * array_iterator - Function that execute each elements of an array
 * @array: Array in which its element is to be accessed
 * @size: Size of array
 * @action: pointer to function to be uesd
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(*array);/* accessing function and passing array value*/
		array = array + 1; /* move to next element in array */
	}
}
