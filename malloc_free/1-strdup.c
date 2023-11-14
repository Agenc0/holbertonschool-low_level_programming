#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates space for a copy of a given string
 *
 * @str: string to copy
 *
 * Return: pointer to copy string if successful, NULL if else
 */

char *_strdup(char *str)
{
	int var = 0;
	char *ptr;

	if (str = NULL)
		return (NULL);

	for (; str[var]; var++)
		;

	ptr = malloc(var + 1);

	if (ptr != NULL)
	{
		for (; var >= 0; var--)
			ptr[var] = str[var];
	}

	return (ptr);
}
