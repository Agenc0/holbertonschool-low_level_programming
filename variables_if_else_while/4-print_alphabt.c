#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *	except for 'e' and 'q'
 *
 * Return: 0 if succesful
 */

int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
