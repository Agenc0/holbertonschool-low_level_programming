#include "main.h"

/**
 * print_triangle - prints a triangle/pyramid, which size
 * is based on input
 *
 * @size: Number of steps/height of the triangle/pyramid
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int var1 = 1;

			for (; var1 <= size; var1++)
			{
				int spaces = size - var1;
				int bricks = 0;

				for (; spaces > 0; spaces--)
					_putchar(' ');

				for (; bricks < var1; bricks++)
					_putchar('#');

				_putchar('\n');
			}
	}
	else
		_putchar('\n');
}
