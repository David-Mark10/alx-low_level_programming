#include "hash_tables.h"

/**
 * hash_table_set - A function to add or update an element.
 * @ht: A pointer to the hash table.
 * @key: The key to add and cannot be an empty string.
 * @value:value associated with key.
 *
 * Return: return 1 if successful or Upon failure - 0.
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *v_copy;
	unsigned long int index, a

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = v_copy;
			return (1);
		}
	}

	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(v_copy);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = v_copy;
	nw->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
