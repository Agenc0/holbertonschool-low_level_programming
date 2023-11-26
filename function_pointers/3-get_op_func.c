#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - selects a function according to a given operator
 *
 * @s: operator
 *
 * Return: function correspondent to operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int var = 0;

	while (var < 5)
	{
		if (strcmp(ops[var].op, s) == 0)
			return (ops[var].f);
		var++;
	}

	return (NULL);
}
