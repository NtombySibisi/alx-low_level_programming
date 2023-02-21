#include "main.h"

/**
 * print_last-digit - function that prints the last digit of a number
 * @n: the numeber
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		return (-1);

	_putchar(ld + '0');

	return (0);
}
