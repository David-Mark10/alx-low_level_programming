#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a list
 * @head: pointer to listint_t structure
 * Return: address of the node where the loop start, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head, *j = head;

	while (i && j && j->next)
	{
		i = i->next;
		j = j->next->next;
		if (i == j)
		{
			return (i);
		}
	}
	return (NULL);
}
