#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * 10 times, each separated by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int count = 0;

	for (; count <= 9; count++)
	{
		int digit = 0;

		for (; digit <= 14; digit++)
		{
			if (digit > 9)
				_putchar((digit / 10) + '0');

			_putchar((digit % 10) + '0');
		}

		_putchar('\n');
	}
}
