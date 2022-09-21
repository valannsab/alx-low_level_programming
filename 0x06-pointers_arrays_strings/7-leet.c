#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: address of encoded string
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}
