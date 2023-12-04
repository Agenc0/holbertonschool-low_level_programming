#include "lists.h"

/**
 * free_dlistint - frees a list of type dlistint_t
 *
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		tmp = head->next;
		free (head);
		head = tmp;
	}
}
