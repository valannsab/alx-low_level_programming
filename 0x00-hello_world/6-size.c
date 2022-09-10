#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	{
	char charType;
	int intType;
	int longintType;
	double doubleType;
	float floatType;

	/* sizeof evaluates the size of variable */
	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("size of a long long int: %zu byte(s)\n", sizeof(doubleType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0); }
	{
	char charType;
	int intType;
	long int doubleType;
	double longdoubleType;
	float floatType;

	/*sizeof evaluates the size of variable */
	; printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a long int: %zu byte(s)\n", sizeof(doubleType));
	printf("size of a long long int: %zu byte(s)\n", sizeof(longdoubleType));
	return (0); }
}
