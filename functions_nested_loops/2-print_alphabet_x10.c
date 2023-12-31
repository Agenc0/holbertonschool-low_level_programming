#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 * ten times, each time separated by a newline.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count++ <= 9)
	{
		char letter = 'a';

		for (; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
