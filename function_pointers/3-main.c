#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - compute simple math operations
 *
 * @argc: # of arguments
 * @argv: pointers to arguments
 *
 * Return: 0 if successful, 98 if error
 */

int main(int argc, char *argv[])
{
	int n1, n2, (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (n2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	fun = get_op_func(argv[2]);

	if (fun == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", fun(n1, n2));
	return (0);
}
