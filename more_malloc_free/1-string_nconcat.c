#include "main.h"
#include <stdlib.h>

/**
 * lenget - get length of a string
 *
 * @s: string to get length of
 *
 * Return: string length
 */

unsigned int lenget(char *s)
{
	unsigned int length = 0;

	while (*s++)
		length++;

	return (length);
}

/**
 * string_nconcat - concatenates a given number of bytes
 * from one string to another
 *
 * @s1: string to concatenate to
 * @s2: string to concatenate
 * @n: max number of characters to concatenate from s2 to s1
 *
 * Return: pointer to concatenated string's space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int var, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = lenget(s1);
	len2 = lenget(s2);

	if (n > len2)
		n = len2;

	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (var = 0; var < len1 + n; var++)
	{
		if (*s1)
		{
			ptr[var] = *s1;
			s1++;
		}

		else
		{
			ptr[var] = *s2;
			s2++;
		}
	}

	ptr[var] = '\0';

	return (ptr);
}
