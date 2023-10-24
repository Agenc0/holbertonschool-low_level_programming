#include "main.h"

/**
 * jack_bauer - prints every minute of the 24 hour clock,
 * from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour = 0;

	for (; hour <= 23; hour++)
	{
		int minute = 0;

		for (; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
