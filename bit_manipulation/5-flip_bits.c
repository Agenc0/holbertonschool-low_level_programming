#include "main.h"

/**
 * flip_bits - gets the # of bits needed to flip from number n to m
 *
 * @n: number to flip
 * @m: number to flip to
 *
 * Return: # of bits to flip to change n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
