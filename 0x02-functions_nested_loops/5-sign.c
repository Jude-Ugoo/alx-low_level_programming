#include "main.h"

/**
 * print_sign - function to print sign
 *
 * @n: the character to execute
 *
 * Return: return 1 if c is positive
 * return 0 if 0
 * return -1 if nagative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
