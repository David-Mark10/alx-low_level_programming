#include "lists.h"

/**
 * insert_nodeint_at_index - The function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: an index of the list
 * @n: The integer data for new node
 * Return: Address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 1;
	listint_t *n_node, *temp;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = n_node;
		n_node->next = NULL;
		n_node->n = n;
		return (n_node);
	}

	if (idx == 0)
	{
		n_node->next = *head;
		n_node->n = n;
		*head = n_node;
		return (n_node);
	}

	temp = *head;
	while (j < idx)
	{
		temp = temp->next;
		j++;
	}

	n_node->n = n;
	n_node->next = temp->next;
	temp->next = n_node;
	return (n_node);
}
