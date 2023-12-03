#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to the beggining of
 * a list of type list_t
 *
 * @head: pointer to the head of the list
 * @str: string to be added as node's value
 *
 * Return: pointer to added node if successful, NULL if else
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *tmp;
	unsigned int i;
	
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	tmp = strdup(str);
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new_node->str = tmp;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
