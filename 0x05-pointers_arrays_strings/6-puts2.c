#include "main.h"

/**
 * puts2 - function to print character of string,
 * starting with the first character.
 *
 * @str: pointer for argument
*/

void puts2(char *str)
{
	int i;
	
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
