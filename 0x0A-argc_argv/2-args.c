#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)/* i is than argc cause we start from 0*/
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
