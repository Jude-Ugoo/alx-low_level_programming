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
	unsigned int i;

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

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
