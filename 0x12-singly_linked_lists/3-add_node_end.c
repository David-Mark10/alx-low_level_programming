#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	int len;
	list_t *add_new, *end;

	add_new = malloc(sizeof(list_t));
	if (add_new == NULL)
		return (NULL);

	ptr = strdup(str);
	if (str == NULL)
	{
		free(add_new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	add_new->str = ptr;
	add_new->len = len;
	add_new->next = NULL;

	if (*head == NULL)
		*head = add_new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = add_new;
	}
	return (*head);
}
