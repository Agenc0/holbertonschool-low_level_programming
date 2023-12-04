#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list of type
 * dlistint_t
 *
 * @head: pointer to head of the list
 * @n: value to set to new node
 *
 * Return: pointer to new node if successful, NULL if else
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
