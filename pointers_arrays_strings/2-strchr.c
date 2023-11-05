#include "main.h"

/**
 * _strchr - locates the first instance of a character in a string
 *
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to located character if found, null if else
 */

char *_strchr(char *s, char c)
{
	int var = 0;

	for (; s[var] >= '\0'; var++)
	{
		if (s[var] == c)
			return (s + var);
	}

	return ('\0');
}
