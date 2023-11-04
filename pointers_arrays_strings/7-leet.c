#include "main.h"

/**
 * leet - encodes a string to 1337.
 *
 * @str: string to be encoded
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	char input[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {4, 3, 0, 7, 1};
	int var1 = 0;

	while (str[var1])
	{
		int var2 = 0;

		for (; var2 < 5; var2++)
		{
			if (str[var1] == input[var2] || str[var1] == input[var2] - 32)
				str[var1] = code[var2] + '0';
		}

		var1++;
	}

	return (str);
}
