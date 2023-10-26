#include "main.h"

/**
 * print_line - prints _ the amount of times that is outputed
 *
 * @n: number of times _ is to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int length;

		for (; length < n; length++)
			_putchar('_');
	}

	_putchar('\n');
}
