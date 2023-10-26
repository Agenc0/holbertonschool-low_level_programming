#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from 1 to 100, with multiples
 * of 3 printing as "Fizz", multiples of 5 printing as
 * "Buzz", and multiples of both printing as "FizzBuzz"
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int digit = 1;

	for (; digit <= 100; digit++)
	{
		if ((digit % 3) == 0 && (digit % 5) == 0)
			printf("FizzBuzz");

		else if ((digit % 3) == 0)
			printf("Fizz");

		else if ((digit % 5) == 0)
			printf("Buzz");

		else
			printf("%d", digit);

		printf(" ");
	}
	
	printf("\n");

	return (0);
}
