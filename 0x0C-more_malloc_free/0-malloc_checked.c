#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Dynamically allocate memory
 * @b: Number of bytes in memory to be allocated
 * Return:  pointer to the allocated memory, on error, process should terminate
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;./* pointer is declared void so as to be able to typecast to any pointer of your choice */

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);

}
