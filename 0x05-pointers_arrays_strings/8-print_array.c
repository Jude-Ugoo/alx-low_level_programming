#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print element of array
 *
 * @a: pointer for argument
 * @n: argument
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
