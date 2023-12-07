#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list
 *
 * @head: the list head
 * @index:the nth node index
 * Return: return the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	j = 0;

	while (head != NULL)
	{
		if (j == index)
			break;
		head = head->next;
		j++;
	}

	return (head);
}
