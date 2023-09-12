#include <stdio.h>

/**
 * main - gives the sizes of various type
 *
 * Return: Return 0 to end the program
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)
			sizeof(d));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(e));
	return (0);
}
