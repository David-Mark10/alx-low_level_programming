#include "main.h"
/**
 * flip_bits - counts the number of bits to flip to reach another number
 * @n: first number to compare
 * @m: second number to compare with
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_outcm;
	unsigned int bits_flp = 0;

	xor_outcm = n ^ m;
	while (xor_outcm > 0)
	{
		if ((xor_outcm & 1) == 1)
			bits_flp++;
		xor_outcm >>= 1;
	}
	return (bits_flp);
}
