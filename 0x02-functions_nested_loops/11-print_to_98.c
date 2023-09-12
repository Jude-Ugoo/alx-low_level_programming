#include <stdio.h>

/**
 * print_to_98 - function to print n-98
 *
 * @n: input number
 *
 * Return: return n - 98
*/

void print_to_98(int n)
{
	int num = 98;

	if (n > num)
	{
		while (n >= num)
		{
			if (n != num)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}

			n--;
		}
	}
	else
	{
		while (n <= num)
		{
			if (n != num)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}

			n++;
		}
	}

	putchar(10);
}
