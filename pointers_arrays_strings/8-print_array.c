#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the inputted amount of values
 * from an array of integers
 *
 * @s: pointer to the array
 *
 * @n: number of values to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int var = 0;

	for (; var < n; var++)
	{
		printf("%d", a[var]);

		printf(", ");
	}

	printf('\n');
}
