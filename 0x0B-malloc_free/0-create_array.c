#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that create an array
 *
 * @size: parameter with the size of the array
 * @c: element of the array
 *
 * Return: Return the value
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
