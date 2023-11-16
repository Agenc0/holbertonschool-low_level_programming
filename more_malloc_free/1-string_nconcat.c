#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates a given number of bytes from one string to another
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
	unsigned int len = n;
	unsigned int var = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[var]; var++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (var = 0; s1[var]; var++)
		ptr[len++] = s1[var];

	for (var = 0; s2[var] && var < n; var++)
		ptr[len++] = s2[var];

	ptr[var] = '\0';

	return (ptr);
}
