#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * (top left - bottom right) in a stair-like pattern
 *
 * @n: number of diagonals to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int length = 0;

		for (; length < n; length++)
		{
			int space = 0;

			for (; space < length; space++)
				_putchar(' ');

			_putchar('\\');

			_putchar('\n');
		}
	}

	_putchar('\n');
}
