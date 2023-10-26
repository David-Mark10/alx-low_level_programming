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
	unsigned int u;
	int ln, btwo;

	if (!b)
		return (0);

	u = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, btwo = 1; ln >= 0; ln--, btwo *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
			
			return (0);
		

		if (b[ln] & 1)
		{
			u += btwo;
		}
	}

	return (u);
}
