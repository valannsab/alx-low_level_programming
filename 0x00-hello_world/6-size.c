#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	float floatType;

	/* sizeof evaluates the size if variable */
	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
