#include <stdio.h>

/**
 * main - Prints numbers 0 through 9
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		printf("%d", num);

	putchar('\n');
	return (0);
}
