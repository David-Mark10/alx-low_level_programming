#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: a pointer that points to the head
 *
 *Return: return Null
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
