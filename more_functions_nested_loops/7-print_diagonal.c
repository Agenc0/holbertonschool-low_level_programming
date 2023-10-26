#include "main.h"

/**
 *
 */

void print_diagional(int n)
{
	if (n > 0)
	{
		int length = 0;

		for (; length < n; length++)
		{
			int space = 0;

			for (; space < length; space++)
				_putchar(' ');

			_putchar('\\');

			_putchar('\n');
		}
	}

	_putchar('\n')
}
