#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev: entry point
 * @s: string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
