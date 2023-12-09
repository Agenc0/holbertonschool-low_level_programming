#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to print as binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bits = sizeof(long int) * 8, zero = 1;
	unsigned long int bit = 1;

	for (bit = bit << (bits - 1); bit; bit = bit >> 1)
	{
		if ((n & bit) && zero)
			zero = 0;
		if (!zero)
			_putchar(((n & bit) ? 1 : 0) + '0');
	}

	if (zero)
		_putchar('0');
}
