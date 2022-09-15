#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: to be tested
 * Return: 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
