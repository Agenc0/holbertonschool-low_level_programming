#include "main.h"

/**
 * factorial - computes the factorial of a given number
 *
 * @n: number to compute the factorial of
 *
 * Return: factorial of given number
 *	0 if n = 0
 *	-1 if error
 */

int factorial(int n)
{
	if (n == 0)
		return (0);

	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1))
}
