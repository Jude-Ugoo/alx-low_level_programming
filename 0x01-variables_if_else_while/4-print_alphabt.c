#include <stdio.h>

/**
 * main - code entry point
 *
 * Return: code success
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');
	return (0);
}
