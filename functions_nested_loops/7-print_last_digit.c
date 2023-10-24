#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given integer
 *
 * @n: integer to print the last digit of
 *
 * Return: last digit of given integer
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
