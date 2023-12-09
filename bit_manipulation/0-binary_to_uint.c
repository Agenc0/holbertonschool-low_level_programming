#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 *
 * @b: pointer to binary string
 *
 * Return: converted number if successful, 0 if else
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	for (; b && *b; b++)
	{
		dec *= 2;
		if (*b == '1' || *b == '0')
			dec += *b - '0';
		else
			return (0);
	}

	return (dec);
}
