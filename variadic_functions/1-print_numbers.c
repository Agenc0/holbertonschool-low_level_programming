#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a newline
 *
 * @separator: string to separate numbers with
 * @n: # of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int var;
	va_list args;

	va_start(args, n);

	for (var = 0; var < n; var++)
	{
		printf("%d", va_arg(args, int));

		if (separator && var != n - 1)
			printf("%s", separator);
	}

	printf("\n");
}
