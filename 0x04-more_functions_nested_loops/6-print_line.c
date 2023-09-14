#include "main.h"

/**
 * print_line - function to print straight line
 * @n: number of line to print
 *
 * Return: Always 0.
*/

void print_line(int n)
{
	int line;

	for (line = n; line > 0; line--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
