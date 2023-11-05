#include "main.h"

/**
 * _strpbrk - locates any set of bytes on a string
 *
 * @s: string to search
 * @accept: bytes to locate
 *
 * Return: pointer to matching byte if matched, null if else
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int var = 0;

		for (; accept[var]; var++)
		{
			if (*s == accept[var])
				return (s);
		}

		s++
	}

	return ('\0');
}
