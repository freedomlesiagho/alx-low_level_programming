#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	/* argc is 1 because only the programe name is passed as argument*/
	printf("%s\n", argv[argc - 1]); /* the argument is index 0 to argv*/
	return (0);
}
