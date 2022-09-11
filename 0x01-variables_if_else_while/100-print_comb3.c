#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 for success
 */
int main(void)
{
	int free1, free2;

	for (free1 = 0; free1 < 9; free1++)
	{
		for (free2 = free1 + 1; free2 < 10; free2++)
		{
			putchar((free1 % 10) + '0');
			putchar((free2 % 10) + '0');

			if (free1 == 8 && free2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
