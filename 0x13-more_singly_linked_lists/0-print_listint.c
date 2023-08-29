#include "lists.h"
/**
 * print_listint_t - print the elements of a listint_t list
 * @h: pointer to the first node
 *
 * return: return the number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t num_data = 0;

	for (; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		num_data += 1;
	}
	return (num_data);
}
