#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: The pointer to listint_t structure
 * Return: The number of nodes Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *i = head, *j = head;

	if (head == NULL)
		exit(98);

	while (i && j && j->next && head)
	{
		i = i->next;
		j = j->next->next;
		if (i == j)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
