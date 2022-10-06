#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, k;
	char *s;

	if (s1 == NULL)/* if s1 is null */
		i = 0;/* length is 0 because is treated as empty string */
	else
	{
		for (i = 0; s1[i]; i++)/* if s1 is not null, get the lenght */
			;
	}
	if (s2 == NULL)/*if s2 is NULL */
		j = 0;/*length is 0 because is treaed as empty string */
	else
	{
		for (j = 0; s2[j]; j++)/* if not NULL get the length */
			;
	}
	if (j > n)
		j = n;
	l = i + j + 1;/* the 1 is to account for null terminator */
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];/* copy s1 into empty blocl of space s */
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];/* concatenate s2 into s from where s1 end */
	s[i + j] = '\0';/* append null terminator to s to mark end of string */
	return (s);
}
