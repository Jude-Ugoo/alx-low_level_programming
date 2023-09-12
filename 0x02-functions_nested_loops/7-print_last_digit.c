#include "main.h"

/**
 * print_last_digit - function to print the last digit
 * @n: function parameter
 *
 * Return: return last digit
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		_putchar(-last_digit + '0');
		return (-d);
	}
	else
	{
		_putchar(last_digit + '0');
		return (d);
	}
}
