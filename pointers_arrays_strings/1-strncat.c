#include "main.h"

/**
 * _strncat - appends @n number for characters from a string in @src
 * to a string in @dest
 *
 * @dest: string to append to
 * @src: string to append
 * @n: number of characters to append
 *
 * Return: pointer to appended string
 */

char *_strncat(char *dest, char *src, int n)
{
	int var = 0;
	int destlen = 0;

	while (dest[var])
		destlen++;

	var = 0;

	for (; src[var] && var < n; var++)
		dest[destlen++] = src[var];

	return (dest);
}
