#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pt;/* pointer declaration*/

	if (size == 0)
		return (NULL);
	pt = malloc(size * sizeof(char));/*pt hold address of empyt block */
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pt[i] = c;/* filling empty block with char c*/
	return (pt);

}
