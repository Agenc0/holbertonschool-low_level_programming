#include "main.h"

/**
 * strcat - appends one string to another, overwriting
 * null byte from the first, adding one at the end
 *
 * @dest: string to append to
 * @src: string to append
 *
 * Return: appended string along with endind null byte.
 */

char *strcat(char *dest, char *src)
{
	int var = 0;
	int destlen = 0;

	while (dest[var++])
		destlen++;

	var = 0;

	for (; src[var]; var++)
		dest[destlen++] = src[var];

	return (dest);
}
