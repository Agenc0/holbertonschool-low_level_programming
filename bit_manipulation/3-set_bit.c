#include "main.h"

/**
 * set_bit - sets the value of a bit at a given location to 1
 *
 * @n: pointer to number
 * @index: location of bit to change
 *
 * Return: 1 if successful, -1 if else
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
