#include "main.h"

/**
 * _memcpy - copies a given number of bytes from a memory area
 * to another
 *
 * @dest: area to copy to
 * @src: area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to the area copied to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*dest++ == *src++;
		n--;
	}

	return (dest)
}
