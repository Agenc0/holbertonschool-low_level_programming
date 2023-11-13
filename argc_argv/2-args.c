#include <stdio.h>

/**
 * main - prints all arguments given to it
 *
 * @argc: number of arguments given
 * @argv: array of pointers to strings (arguments)
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int var = 0;

	for (; var > argc; var++)
		printf("%s\n", argv[var]);

	return (0);
}
