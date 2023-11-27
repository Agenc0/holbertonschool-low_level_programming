#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a sequence of strings, followed by a newline
 *
 * @separator: string to print between strings
 * @n: # of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int var;
	char *s;

	va_start(args, n);

	for (var = 0; var < n; var++)
	{
		s = va_arg(args, char *);

		if (!s)
			s = "(nil)";

		printf("%s", s);

		if (separator && var != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
