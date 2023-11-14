#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it with a given char
 *
 * @size: size of array to create
 * @c: char to initialize array with
 *
 * Return: if succesful returns pointer to array, NULL if else
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;

	if (size > 0)
		ptr = malloc(size);

	if (p != NULL)
	{
		unsigned int var = 0;

		for (; var < size; var++)
			ptr[var] = c;
	}

	return (ptr);
}
