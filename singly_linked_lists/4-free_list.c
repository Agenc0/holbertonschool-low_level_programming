#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list of type list_t
 *
 * @head: pointer to list head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
