#include <stdio.h>
/**
 * main - Entry point
 *i
 * Description: main prints all single digit numbers of base 10 starting from 0
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d\n", num);
	return (0);
}
