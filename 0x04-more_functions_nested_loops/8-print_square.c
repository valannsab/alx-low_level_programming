#include "main.h"
/**
 * print_square - prints a square
 * followed by a new line
 * @size: parameter
 * use # to print square
 * Return: nothing
 */
void print_square(int size)
{
	int int1, int2;

	if (size > 0)
	{
		for (int1 = 0; int1 < size; int1++)
		{
			for (int2 = 0; int2 < size; int2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
