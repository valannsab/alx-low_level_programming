#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 * @_: character
 * @n: the times character to be printed
 * Return: nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
