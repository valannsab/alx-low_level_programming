#include "main.h"
/**
 * print_alphabet_x10 - function to print 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char j, i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
