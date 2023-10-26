#include "main.h"

/**
 * binary_to_uint - A function that Converts a binary 
 * number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nb = 0, m = 1;
	int l;

	if (!b)
		return (0);

	for (l = 0; b[l];)
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		nb += (b[l] - '0') * m;
		m *= 2;
	}

	return (nb);
}
