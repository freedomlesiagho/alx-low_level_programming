#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, min;/* min is minimum lenth to copy upto */
	char *oldp = ptr;/* typecast void pointer to your choice of pointer */

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		min = old_size;/*if newsize is greater,only copy upto oldsize*/
	else
		min = new_size;/*if oldsize is greater,only copy upto newsize*/
	for (i = 0; i < min; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
