#include "main.h"

/**
 * puts2 - prints every odd character in a string
 *
 * @str: string to get characters from
 *
 * Returns: void
 */

void puts2(char *str)
{
	int length = 0;
	int var = 0;

	while (str[var++])
		length++;

	for (; var < length; var += 2)
		_putchar(str[var]);

	_putchar('\n');
}
