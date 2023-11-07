#include "main.h"

/**
 * _strlen_recursion - computes the length of a given string
 *
 * @s: pointer to string to compute length of
 *
 * Return: length of given string
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s)
	{
		len += _strlen_recursion(s + 1);
	}

	return (len - 1);
}
