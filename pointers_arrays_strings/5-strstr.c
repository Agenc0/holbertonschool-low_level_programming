#include "main.h"

/**
 * _strstr - locates a substring in a given string
 *
 * @haystack: string to be searched
 * @needle: substring to search for
 *
 * Return: pointer to the beggining of substring if found, null if else
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		int var = 0;

		if (haystack[var] == needle[var])
		{
			do {
				if (needle[var + 1] == '\0')
					return (haystack);

				var++;

			} while (haystack[var] == needle[var]);
		}

		haystack++;
	}

	return ('\0');
}
