#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to a list
 *
 * Return: return the number of a node
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t numb = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		numb += 1;
		ptr = ptr->next;
	}

	return (numb);
}
