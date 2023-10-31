#include "main.h"

/**
 * _strcpy - copies a string, including null byte
 * to another buffer
 *
 * @dest: destination buffer to copy to
 *
 * @src: source to copy from / string to copy
 *
 * Return: a pointer to destination string
 */

char *_strcpy(char *dest, const char *src)
{
	int var = 0;

	while (src[var])
	{
		dest[var] = src[var];
		var++;
	}

	return (dest);
}
