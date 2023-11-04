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
	int var = 0;

	while (str[var])
	{
		for (; var < 5; var++)
		{
			if (str[var] == input[var] || str[var] == input[var] - 32)
				str[var] = code[var] + '0';
		}
		
		var++;
	}
	
	return (str);
}
