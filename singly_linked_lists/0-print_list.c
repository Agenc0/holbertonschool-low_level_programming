#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a list_t list
 * (see header file for info)
 *
 * @h: list of type list_t
 *
 * Return: # of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] nil\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
