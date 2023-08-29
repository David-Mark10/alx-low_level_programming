#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a listint
 * @head: a pointer to the address of the head of a linked list
 * @n: the integer for the added node
 *
 * Return: return NULL if check fail or address if pass
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h;

	new_h = malloc(sizeof(listint_t));

	if (new_h == NULL)
		return (NULL);

	new_h->n = n;
	new_h->next = *head;

	*head = new_h;
	return (new_h);
}
