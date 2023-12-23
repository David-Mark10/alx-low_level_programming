#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: djb value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int djb;
	int a;

	djb = 5381;
	while ((a = *str++))
	{
		djb = ((djb << 5) + djb) + a; /*djb * 33 + c */
	}
	return (djb);
}
