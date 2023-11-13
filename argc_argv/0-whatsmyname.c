#include <stdio.h>

/**
 * main - prints the program's name
 * 
 * @argc: number of arguments given
 * @argv: array of pointers to strings (arguments)
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
