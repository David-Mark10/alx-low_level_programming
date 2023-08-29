#include "lists.h"
/**
 * add_nodeint_end - add new node to the end of a listint list
 * @head: a pointer to the head of a list
 * @n: number to use as content
 *
 *Return: to return the address of a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
