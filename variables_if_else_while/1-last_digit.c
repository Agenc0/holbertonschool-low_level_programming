#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number and checks for its last digit
 *	then prints the number along with its last digit, and
 *	prints wheter it is greater than 5, less than 6(!0) or 0
 *
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int ld;

	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	if else (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}

	return (0);
}
