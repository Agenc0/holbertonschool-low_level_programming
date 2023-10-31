#include "main.h"

/**
 * puts_half - prints the second half of a given string
 *
 * @str: string to print half of
 *
 * Returns: void
 */

void puts_half(char *str)
{
	int length = 0;
	int var = 0;
	int n;

	while (str[var++])
		length++;

	if (length % 2 == 0)
		n = length / 2;

	else
		n = (length + 1) / 2;

	var = n;

	for (; var < length; var++)
		_putchar(str[var]);

	_putchar('\n');
}
