#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: main prints the lowercase alphabet in reverse
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
