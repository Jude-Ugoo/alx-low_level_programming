#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: end program
 *
*/

int main(void)
{
	char rev_alpha;

	for (rev_alpha = 'z'; rev_alpha >= 'a'; rev_alpha--)
	{
		putchar(rev_alpha);
	}

	putchar('\n');
	return (0);
}
