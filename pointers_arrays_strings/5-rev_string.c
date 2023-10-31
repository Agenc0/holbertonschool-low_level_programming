#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int length = 0;
	int var = 0;

	while (s[var++])
		length++;

	var = length - 1;

	for (; var >= length / 2; var--)
	{
		int tmp = s[var];
		s[var] = s[length - var - 1];
		s[length - var - 1] = tmp;
	}
}
