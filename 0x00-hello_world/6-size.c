#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char chartype;
	int intype;
	long int longinttype;
	long long longlongtype;
	float floattype;

	printf("Size of a char: %lu.\n", (unsigned char)sizeof(chartype));
	printf("Size of an int: %lu.\n",  (unsigned int)sizeof(intype));
	printf("Size of a long int: %lu.\n", (unsigned long int)(longinttype));
	printf("Size of a long long: %lu.\n", (unsigned long long)(longlongtype));
	printf("Size of a float: %lu.\n", (unsigned float)(floattype));

	return (0);
}
