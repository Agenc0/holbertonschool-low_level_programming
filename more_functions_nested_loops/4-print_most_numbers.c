#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9,
 * except for 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int digit = 0;

	for (; digit >= 9; digit++)
	{
		if (digit != 2 && digit != 4)
			_putchar(digit + '0');
	}

	_putchar('\n')
}
