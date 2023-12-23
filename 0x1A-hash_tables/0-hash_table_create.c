/*
 * File: 0-hash_table_create.c
 */

#include "hash_tables.h"

/**
 * hash_table_create -A function that Creates a hash table.
 * @size: The array size.
 *
 * Return: If an error occurs - return NULL.
 *         Otherwise - point to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htbl;
	unsigned long int a;

	htbl = malloc(sizeof(hash_table_t));
	if (htbl == NULL)
		return (NULL);

	htbl->size = size;
	htbl->array = malloc(sizeof(hash_node_t *) * size);
	if (htbl->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		htbl->array[a] = NULL;

	return (htbl);
}
