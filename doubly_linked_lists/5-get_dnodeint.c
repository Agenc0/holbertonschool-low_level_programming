#include "lists.h"

/**
 * get_dnodeint_at_index - gets a specific node from a dlistint_t
 * linked list
 *
 * @head: head of list
 * @index: # of node to locate
 *
 * Return: pointer to node if successful, NULL if else
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
