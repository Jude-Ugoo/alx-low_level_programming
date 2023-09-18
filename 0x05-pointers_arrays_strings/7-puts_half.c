#include "main.h"

/**
 * puts_half - function to print half of string
 *
 * @str: pointer for argument
*/

void puts_half(char *str)
{
	int i;
	int half;

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	half = (i % 2 == 0) ? i / 2 : (i + 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half++]);
	}

	_putchar('\n');
}
