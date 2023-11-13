#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 *
 * @argc: # of arguments given
 * @argv: array of pointers to strings (arguments)
 *
 * Return: 0 if successful, print "Error" and return 1 if else
 */

int main(int argc, char *argv[])
{
	int var = 1;
	int sum = 0;

	for (; var < argc; var++)
	{
		int var1 = 0;

		for (; argv[var][var1]; var1++)
		{
			if (argc[var][var1] < '0' || argc[var][var1] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[var]);
	}

	printf("%d\n", sum);
	return (0);
}
