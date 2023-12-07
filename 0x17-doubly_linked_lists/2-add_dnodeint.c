#include "lists.h"

/**
 * add_dnodeint -function adding new node at the start
 * of a dlistint_t list
 *
 * @head:the list head
 * @n: argument value of the element
 * Return: return the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	nw->next = *head;

	if (*head != NULL)
		(*head)->prev = nw;

	*head = nw;

	return (nw);
}
