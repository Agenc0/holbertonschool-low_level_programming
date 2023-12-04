#include "lists.h"

/**
 * sum_dlistint - computes the sum of all values in a
 * linked list of type dlistint_t
 *
 * @head: head of list
 *
 * Return: sum of all values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
