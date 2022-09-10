#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: main prints alphabet in lowercase 
 * followed by new line
 * apart from e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}

