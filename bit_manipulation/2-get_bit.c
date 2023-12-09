#include "main.h"

/**
 * get_bit - gets the value of a bit at given index
 *
 * @n: number to search bit on
 * @index: location of bit to search
 *
 * Return: value of bit if successful, -1 if else
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
