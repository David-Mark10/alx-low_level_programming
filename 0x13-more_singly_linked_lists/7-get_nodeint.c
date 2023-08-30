#include "lists.h"

/**
 * get_nodeint_at_index - function that gets a node of list at specific index
 * @head: the pointer to listint_t structure
 * @index: the node index
 * Return: return a pointer to node at specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
