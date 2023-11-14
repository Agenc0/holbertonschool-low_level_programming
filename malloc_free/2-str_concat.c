#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: base string
 * @s2: string to concatenate
 *
 * Return: pointer to concatenated strings if successful,
 *	NULL if else
 */

char *str_concat(char *s1, char *s2);
{
	char *ptr;
	int len1 = 0;
	int len2 = 0;
	int var1 = 0;
	int var2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[len1]; len1++)
		;

	for (; s2[len2]; len2++)
		;

	p = malloc (len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (; var1 < len1; var1++)
		ptr[var1] = s1[var1];

	for (; var1 < len1 + len2; var1++; var2++;)
		ptr[var1] = s2[var2];

	ptr[var1] = '\0';

	return (ptr);
}
