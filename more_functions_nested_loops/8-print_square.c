#include "main.h"

/**
 * print_square - prints a square with the # character,
 * which size depends on input
 *
 * @size: length and width of the square
 *
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int height;

		for (; height < size; height++)
		{
			int width;
			
			for (; width < size; width++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
