#include "lists.h"

/**
 * free_dlistint - function to free dlistint_t list
 *
 * @head: the list head
 * Return:return nothing (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((nxt = head) != NULL)
	{
		head = head->next;
		free(nxt);
	}
}


















