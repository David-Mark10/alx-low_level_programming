#include "lists.h"

/**
 * dlistint_len -function that returns the number of elements in
 * a double linked list
 *
 * @h: list head of the list
 * Return: return the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ct = 0;

	if (h == NULL)
		return (ct);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		ct++;
		h = h->next;
	}

	return (ct);
}
