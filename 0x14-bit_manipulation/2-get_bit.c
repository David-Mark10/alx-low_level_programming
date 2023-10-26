#include "main.h"

/**
 * get_bit - A function that returns value of a bit at a given index.
 * @n: Its an integer value of binary in base 10.
 * @index: Index you want to read the bit value.
 *
 * Return: Bit at a specific index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitShft;

	if (index > 32)
		return (-1);

	bitShft = (n >> index) & 1;
	return (bitShft);
}
