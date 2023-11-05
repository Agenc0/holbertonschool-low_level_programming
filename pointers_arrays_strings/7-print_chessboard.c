#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 *
 * @a: chessboard to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int var1 = 0;

	for (; var1 < 8; var1++)
	{
		int var2 = 0;

		for (; var2 < 8; var2++)
			_putchar(a[var1][var2]);
		
		_putchar('\n');
	}
}
