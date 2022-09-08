#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",  (unsigned int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(c));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned float)sizeof(e));
	return (0);
}
