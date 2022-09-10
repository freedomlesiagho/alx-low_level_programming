#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	/* Declaring my varaible*/
	char blessing;

	for (blessing = 'z'; blessing >= 'a'; blessing--)

		putchar(blessing);

	putchar('\n');

	return (0);
}
