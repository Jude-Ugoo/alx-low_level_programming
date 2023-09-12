#include "main.h"

/**
 * print_alphabet - function to print a-z
 *
 * Return: end program
 *
*/

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
}
