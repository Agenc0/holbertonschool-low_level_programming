#include "lists.h"
#include <stddef.h>

/**
 * list_len - gets the number of elements in a list
 * of type list_t
 *
 * @h: list_t list
 *
 * Return: # of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
