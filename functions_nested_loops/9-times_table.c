#include "main.h"

/**
 * times_table - Prints the times table from 0 to 9,
 * in ascending order
 *
 * Return: void
 */

void times_table(void)
{
	int num = 0;
	
	for (; num <= 9; num++)
	{
		int multiplier = 1;

		_putchar('0');

		for (; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			int result = num * multiplier;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}
