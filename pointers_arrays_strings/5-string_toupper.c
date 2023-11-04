#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase in a string
 *
 * @s: string to change
 *
 * Return: pointer to modified string
 */

char *string_toupper(char *s)
{
	int var = 0;

	while (s[var])
	{
		if (s[var] >= 'a' && s[var] <= 'z')
			s[var] -= 32;

		var++;
	}

	return (s);
}
