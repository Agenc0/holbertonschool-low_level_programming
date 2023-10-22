#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit
 *	numbers, followed by "," and " ".
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int num = 0;

	for (; num <= 10; num++)
	{
		putchar(num + '0');
		if (num <= 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
