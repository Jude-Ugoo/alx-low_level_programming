#include <stdio.h>
#include <math.h>

/**
 * main - code entry
 *
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143;
	long int largestPrime = -1;
	long int divisor = 2;

	while (number > 1)
	{
		if (number % divisor == 0)
		{
			largestPrime = divisor;
			while (number % divisor == 0)
			{
				number /= divisor;
			}
		}
		divisor++;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
