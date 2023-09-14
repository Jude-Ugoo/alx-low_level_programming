#include "main.h"

/**
 * print_most_numbers - function to print digit 0-9
 * minus 2 & 4
 *
 * Return: Always 0.
*/

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}
