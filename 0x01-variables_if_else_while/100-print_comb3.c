#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: main prints all possible different combinations of two digits
 * numbers separated by ',' followed by space
 * the two digit must be different
 * 1 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * in ascending order with two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 9 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
