#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, reversed
 *
 * Return: 0 if succesful
 */

int main(void)
{
	char lcr = 'z';

	for (; lcr >= 'a'; lcr--)
		putchar(lcr);

	putchar('\n');
	return (0);
}
