#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)/*lop to iterate all strings */
	{
		for (j = 0; av[i][j]; j++)/*loop to count char in each string*/
			n++;/* numbers of characters */
		n++;/* count space before moving to next string */
	}
	n++;/* add 1 to total chars to account for null character byte */
	s = malloc(n * sizeof(char));/* empty block space to conc all strings*/
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;/* increment k */
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
