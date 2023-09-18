#include "main.h"

/**
 *print_rev - function to print string in reverse
 *@s: pointer for function argument
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	while (i > 0)
	{
		_putchar(s[--i]);
	}

	_putchar('\n');
}
