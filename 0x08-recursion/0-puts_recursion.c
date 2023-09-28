#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 *
 * @s: argument
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
