#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char free;

	for (free = 'a'; free <= 'z'; free++)
	{
		putchar(free);
	}
		putchar('\n');

	return (0);
}
