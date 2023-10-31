#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 *
 * @a: first value
 *
 * @b: second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int a2 = *a;
	*a = *b;
	*b = a2;
}
