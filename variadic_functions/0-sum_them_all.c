#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - compute sum of arguments
 *
 * @n: # of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int var, sum = 0;

	if (n <= 0)
		return (0);

	va_start(args, n);

	for (var = 0; var < n; var++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
