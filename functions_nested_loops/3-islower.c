#include "main.h"

/**
 * _islower - Checks wether 'c' is a lowercase character
 * if it is, returns 1, if not, returns 0
 *
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <='z')
		return (1);
	else
		return (0);
}
