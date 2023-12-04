#include "lists.h"

/**
 * print_dtlistint - prints all elements in a list of type
 * dtlistint_t
 *
 * @h: pointer to head of list
 *
 * Return: # of nodes in list
 */

size_t print_dtlistint(const dtlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
