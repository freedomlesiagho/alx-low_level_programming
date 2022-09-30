#include <stdio.h>

/**
 * main - printthe number of arguments passed to it excluding the programe name
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);/* argc -1 will exclude the programe name*/
	return (0);
}
