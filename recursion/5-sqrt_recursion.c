#include "main.h"

/**
 * sqrtfinder - finds the square root of a number,
 * iterating through every number before it
 *
 * @n: number to find square root of
 * @itr: iteration number
 *
 * Return: square root of n, -1 if error
 */

int sqrtfinder(int n, int itr)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n / itr == itr && (n % itr == 0))
		return (itr);
	else if (n > itr)
		return (sqrtfinder(n, itr + 1))
}

/**
 * _sqrt_recursion - finds the square root of a given number
 *
 * @n: number to find square root of
 *
 * Return: square root of n, -1 if error
 */

int _sqrt_recursion(int n);
{
	return (sqrtfinder(n, 1));
}
