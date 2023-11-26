#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: first int to sum
 * @b: second int to sum
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - compute difference of two integers
 *
 * @a: integer to subtract from
 * @b: integer to substract
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - compute product of two integers
 *
 * @a: integer to multiply
 * @b: multiplier
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - compute quotient of two integers
 *
 * @a: integer to divide
 * @b: divisor
 *
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - compute remainder of division of a and b
 *
 * @a: integer to divide
 * @b: divisor
 *
 * Return: remainder of division between a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
