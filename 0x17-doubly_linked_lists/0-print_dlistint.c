#include "lists.h"

/**
 * print_dlistint - Function that Prints all the elements
 * of a dlistint_t list
 * @h: The list Head
 * Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t ct = 0;
	const dlistint_t *crnt = h;

	while (crnt != NULL)
	{
		printf("%d\n", crnt->n);
		ct++;
		crnt = crnt->next;
	}

	return (ct);
}
