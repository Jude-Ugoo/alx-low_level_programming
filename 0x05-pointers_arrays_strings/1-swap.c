#include "main.h"

#include "main.h"

/**
 * swap_int - function to swap two values
 *@a: argument value 1
 *@b: argument value 2
*/

void swap_int(int *a, int *b)
{
	int temp1;
	int temp2;

	temp1 = (*a);
	temp2 = (*b);

	(*a) = (temp2);
	(*b) = (temp1);
}
