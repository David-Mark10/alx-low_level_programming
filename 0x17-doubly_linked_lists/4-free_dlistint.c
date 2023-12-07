#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 *
 * @head: the list head
 * Return: return nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt;

	while (head != NULL)
	{
		nxt = head->nxt;
		free(head);
		head = nxt;
	}
}
