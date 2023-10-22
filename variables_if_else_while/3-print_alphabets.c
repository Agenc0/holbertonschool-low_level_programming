#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and
 *	the alphabet in uppercase right after.
 *
 *
 * Return: 0 if succesful
 */

int main(void)
{
	char lc = 'a';
	char uc = 'A';

	for (lc <= 'z'; lc++) {
		putchar(lc);
	}

	for (uc <= 'Z'; uc++) {
		putchar(uc);
	}

	putchar('\n');
	return (0);

}
