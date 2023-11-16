#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array with malloc
 *
 * @nmemb: # of elements in array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, NULL if else
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	nmemb *= size;

	while (nmemb--)
		ptr[nmemb] = 0;

	return (ptr);
}
