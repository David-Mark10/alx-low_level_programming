#include "lists.h"

/**
 * add_dnodeint_end - function adds new node at the end
 * of a dlistint_t list
 *
 * @head: the list head
 * @n: argument value of the element
 * Return: return address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lst;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
	}
	else
	{
		lst = *head;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = nw;
		nw->prev = lst;
	}

	return (nw);
}
