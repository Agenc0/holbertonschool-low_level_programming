#include "main.h"

/**
 * _strncpy - copies @n number of characters from a string in @src
 * to buffer @dest.
 *
 * @dest: buffer to copy to
 * @src: string to copy from
 * @n: number of characters to copy
 *
 * Return: pointer to buffer retaining copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int var = 0;
	int srclen = 0;

	while (src[var++])
		srclen++;

	var = 0;

	for (; src[var] && var < n; var++)
		dest[var] = src[var];

	var = srclen;

	for (; var < n; var++)
		dest[var] = '\0';

	return (dest);
}
