#include "main.h"

/**
 * rev_string - function to reverse string
 *
 * @s: pointer for argument
*/

void rev_string(char *s)
{
	int length;
	char temp;
	int start = 0;
	int end;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}

}
