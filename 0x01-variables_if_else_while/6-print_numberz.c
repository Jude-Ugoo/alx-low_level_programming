#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: end program
 *
*/

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	putchar('\n');
	return (0);
}
