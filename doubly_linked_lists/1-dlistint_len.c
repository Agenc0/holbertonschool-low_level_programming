#include "lists.h"

/**
 * dlistint_len - gets the length of a list of type
 * dlistint_t
 *
 * @h: pointer to head of list
 *
 * Return: # of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
