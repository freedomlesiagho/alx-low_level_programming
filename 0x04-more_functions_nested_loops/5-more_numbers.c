#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int num, times;

	for (times = 0; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
		if (num >= 10)


			_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');


		}
		_putchar('\n');

	}
}
