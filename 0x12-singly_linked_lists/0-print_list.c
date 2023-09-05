/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
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
