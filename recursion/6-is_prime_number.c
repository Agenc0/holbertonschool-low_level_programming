#include "main.h"

/**
 * primechecker - checks if a number is a prime number
 *
 * @n: number to check
 * @itr: iteration
 *
 * Return: 1 if prime, 0 if else
 */

int primechecker(int n, int itr)
{
	if (n == 2)
		return (1);
	if (n <= 1 || n % 2 == 0)
		return (0);
	if (n % itr == 0 && n != itr)
		return (0);
	if (n > itr)
		return (primechecker(n, itr + 2));

	return (1);
}

/**
 * is_prime_number - checks if a given number is a prime number
 *
 * @n: number to check
 *
 * Return: 1 if prime, 0 if else
 */

int is_prime_number(int n)
{
	return (primechecker(n, 3));
}
