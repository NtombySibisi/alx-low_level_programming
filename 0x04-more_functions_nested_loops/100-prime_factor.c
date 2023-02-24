#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long i, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxf = number / i;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
