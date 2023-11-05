#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string to search
 * @accept: prefix to measure
 *
 * Return: number of bytes in s that match bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s)
	{
		int var = 0;

		for (; accept[var]; var++)
		{
			if (*s == accept[var])
			{
				length++;
				break;
			}

			else if (accept[var + 1] == '\0')
				return (length);
		}

		s++;
	}
	
	return (length);
}
