#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural number from input
 * to 98, followed by a comma and a space after each
 *
 * @n: Input number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);

		printf("%d\n", n);
	}
	else
	{
		for (; n < 98; n++)
			printf("%d, ", n);

		printf("%d\n", n);
	}
}
