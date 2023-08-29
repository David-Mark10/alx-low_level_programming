#include "lists.h"
/**
 * listint_len - print the number of elements of a listint_t list
 * @h: pointer to the first node
 *
 * Return: return the number of node
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t num_data = 0;

	for (; ptr != NULL; ptr = ptr->next)
	{
		/* printf("%d\n", ptr->n);*/
		num_data += 1;
	}
	return (num_data);
}
