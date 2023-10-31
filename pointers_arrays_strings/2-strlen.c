#include "main.h"

/**
 * _strlen - returns the length of a given string.
 *
 * @s: string to get length from
 *
 * Return: length value
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (*s++)
		strlen++;

	return (strlen);
}
