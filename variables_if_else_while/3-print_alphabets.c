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
	for (lc = 'a'; lc <= 'z'; lc++) {
		putchar(lc);
	}

	for (uc = 'A'; uc  <= 'Z'; uc++) {
		putchar(uc);
	}

	putchar('\n');
	return (0);

}
