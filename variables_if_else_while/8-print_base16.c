#include <stdio.h>

/**
 * main - Prints all the base16 numbers in lowercase
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	for (; num <= 10; num++)
		putchar(num + '0');

	for (; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
