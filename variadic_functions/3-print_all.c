#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 *
 * @format: string of chars containing data type of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int var = 0;
	va_list args;
	char *s, *separator = "";

	if (format)
	{
		va_start(args, format);

		while (format[var])
		{

			switch (format[var])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);

					if (!s)
						s = "(nil)";

					printf("%s%s", separator, s);
					break;
				default:
					var++;
					continue;
			}

			separator = ", ";

			var++;
		}

		va_end(args);
	}
	
	printf("\n");
}
