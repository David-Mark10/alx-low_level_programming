#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at index of
 * dlistint_t linked list
 *
 * @head: the list head
 * @index: the node index
 * Return: if it succeeded return 1 or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crnt = NULL;
	dlistint_t *pvs = NULL;
	unsigned int j = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	crnt = *head;
	while (crnt != NULL && i < index)
	{
		pvs = crnt;
		crnt = crnt->next;
		j++;
	}
	if (crnt == NULL)
		return (-1);

	if (pvs == NULL)
	{
		*head = crnt->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		pvs->next = crnt->next;
		if (crnt->next != NULL)
			crnt->next->prev = pvs;
	}

	free(crnt);
	return (1);
}
