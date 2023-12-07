#include "lists.h"

/**
 * sum_dlistint - funtion that returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: the list head
 * Return: return the total of the data
 */
int sum_dlistint(dlistint_t *head)
{
        int totl = 0;

        while (head != NULL)
        {
                totl += head->n;
                head = head->next;
        }
        return (totl);
