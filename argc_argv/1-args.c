#include <stdio.h>

/**
 * main - prints the number of arguments passed onto it
 *
 * @argc: number of arguments given
 * @argv: array of pointers to strings (arguments)
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
