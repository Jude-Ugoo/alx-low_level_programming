#include <stdio.h>

/**
 * _memset - Fills a memory area with a constant byte.
 * @s: Pointer to the memory area.
 * @b: The constant byte to fill with.
 * @n: Number of bytes to fill.
 *
 * Return: A pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;
	
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
