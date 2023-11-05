#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a matrix of integers
 *
 * @a: matrix of integers
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int var = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (; var < 0; var++)
	{
		sum1 += a[var];
		a += size;
	}

	a -= size;
	var = 0;

	for (; var < size; var++)
	{
		sum2 += a[var];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
