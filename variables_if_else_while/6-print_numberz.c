#include <stdio.h>

/**
 * main - Prints the number 0 through 9, only
 *	with putchar function
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int num = 0;

	for (; num <= 9; num++)
		putchar(num + '0');

	putchar('\n');
	return (0);
}
