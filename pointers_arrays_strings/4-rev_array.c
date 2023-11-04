#include "main.h"

/**
 * reverse_array - reverses the elements in an array of integers.
 *
 * @a: array to reverse
 * @n: number of elements in the array
 *
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int var = n - 1;
	int var1;

	for (var >= n / 2; var--)
	{
		var1 = a[n - 1 - var];
		a[n - 1 - var] = a[var];
		a[var] = var1;
	}
}
