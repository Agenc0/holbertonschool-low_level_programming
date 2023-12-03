#include "lists.h"
#include <string.h>

/**
 * add_node_end - appends a node at the end of a list
 * of type list_t
 *
 * @head: pointer to head of list
 * @str: string to add as value for new node
 *
 * Return: pointer to new node if successful, NULL if else
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end;
	char *temp;
	unsigned int i;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	temp = strdup(str);

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new_node->str = temp;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}

	return (*head);
}
