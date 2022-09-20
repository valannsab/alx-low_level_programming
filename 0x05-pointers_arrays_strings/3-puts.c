#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: function that prints a string,
 * followed by a new line, to stdout
 * Return: no error on success
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
