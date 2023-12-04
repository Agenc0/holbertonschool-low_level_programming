#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a linked list
 * of type dlistint_t at a specified position
 *
 * @head: pointer to head of list
 * @index: position/node to delete
 *
 * Return: 1 if successful, -1 if else
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (tmp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
