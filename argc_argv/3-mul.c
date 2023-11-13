#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 *
 * @argc: # of arguments given
 * @argv: array of pointers to strings (arguments)
 *
 * Return: 0 if succesful, prints "Error" and returns 1 if else
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
