#include "main.h"

/**
 * _isdigit - Checks if a given character is a digit
 *
 * @c: character to be checked
 *
 * Return: 1 if digit, 0 if else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
