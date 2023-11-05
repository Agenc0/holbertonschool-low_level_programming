#include "main.h"

/**
 * _memset - fills a memory area with a constant byte
 *
 * @s: pointer to memory area to fill
 * @b: constant byte
 * @n: bytes to fill
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
		s[a] = b;

	return (s);
}
