#include <stdio.h>

/**
 * main - This is the starting point of execution
 *
 * Return: program will return 0 if successful
 */

int main(void)
{
	char joy;

	for (joy = 'a'; joy <= 'z'; joy++)
	{
		if (joy != 'e' && joy != 'q')
			putchar(joy);
	}
	putchar('\n');

	return (0);
}
