#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;
	unsigned int digit;

	for (num = 1; num < argc; num++)/* loop to iterate all string*/
	{
		char *subpointer = argv[num];/* pointer to each sub string*/

		for (digit = 0; digit < strlen(subpointer); digit++)/* check substring */
		{
			if (subpointer[digit] < '0' || subpointer[digit] > '9')
			{
				printf("Error\n");/* return error if not 0-9*/
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
