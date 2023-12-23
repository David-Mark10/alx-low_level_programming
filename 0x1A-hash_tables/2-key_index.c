#include "hash_tables.h"

/**
 * key_index - function to get index at which a key/value pair should
 *             be stored in hash table.
 * @key: The index key.
 * @size: The hash table array size.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
