#include "main.h"

/**
 * print_numbers - prints numbers from 0  to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int digit = 0;

	for (; digit <= 9; digit++)
		_putchar(digit + '0');

	_putchar('\n');
}
