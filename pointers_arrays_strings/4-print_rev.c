#include "main.h"

/**
 * print_rev - prints a given string, reversed.
 *
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int var = 0;

	while (s[var++])
		length++;

	var = length - 1;

	for (; var >= 0; var--)
		_putchar(s[var]);

	_putchar('\n');
}
