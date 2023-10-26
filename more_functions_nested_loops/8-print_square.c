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
		int height = 0;

		for (; height < size; height++)
		{
			int width = 0;
			
			for (; width < size; width++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
