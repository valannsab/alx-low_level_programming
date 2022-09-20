#include "main.h"

/**
 * swap_int - entry point
 * Description: function that swaps the values of two integers
 * @a:first integer
 * @b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
