#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - this a function that deletes the node at
 * specified index from the list
 * @head: the pointer to listint_t structure
 * @index: an index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nodes;
	unsigned int j = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (j < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			j++;
		}
		nodes = temp;
		nodes = nodes->next;
		temp->next = nodes->next;
		free(nodes);
	}
	return (1);
}
