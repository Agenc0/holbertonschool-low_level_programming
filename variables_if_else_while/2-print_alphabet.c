#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 *
 * Return: 0 if succesful
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
