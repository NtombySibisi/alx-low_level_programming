#include "main.h"

/**
 * print_alphabet_x10 - a function that prints
 * x10 times the alphabet, in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
	}
}
