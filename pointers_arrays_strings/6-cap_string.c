#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: string to modify
 *
 * Return: pointer to modified string
 */

char *cap_string(char *str)
{
	int var = 0;

	while (str[var])
	{
		while (!(str[var] >= 'a' && str[var] <= 'z'))
			var++;

		if (str[var] - 1 == ' ' ||
				str[var] - 1 == '\t' ||
				str[var] - 1 == '\n' ||
				str[var] - 1 == ',' ||
				str[var] - 1 == ';' ||
				str[var] - 1 == '.' ||
				str[var] - 1 == '!' ||
				str[var] - 1 == '?' ||
				str[var] - 1 == '"' ||
				str[var] - 1 == '(' ||
				str[var] - 1 == ')' ||
				str[var] - 1 == '{' ||
				str[var] - 1 == '}' ||
				var == 0)
			str[var] -= 32;

		var++;
	}

	return (str);
}
