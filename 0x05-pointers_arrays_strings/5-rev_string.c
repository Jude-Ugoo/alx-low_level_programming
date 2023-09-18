#include "main.h"

/**
 * rev_string - function to reverse string
 *
 * @s: pointer for argument
*/

void rev_string(char *s)
{
	int i;
	char temp;
	int x;
	int y;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	y = i - 1;
	i /= 2;

	while (i--)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++;
		y++;
	}
}
