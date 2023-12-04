#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list of type
 * dlistint_t
 *
 * @head: pointer to head of list
 * @n: value to set to new node
 *
 * Return: pointer to new node if successful, NULL if else
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	new_node->prev = last;

	return (new_node);
}
