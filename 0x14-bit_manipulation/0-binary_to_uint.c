#include "main.h"
/**
 * binary_to_uint - Its a func that converts a binary number to an unsigned int.
 * @b: Its a pointer to a string of 1 and 0 characters.
 *
 * Return: This return a converted number, or 0 if there is one or more char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0, mtpl = 1;
	int lnt;

	if (!b)
		return (0);

	for (lnt = 0; b[lnt]; lnt++);

	for (lnt -= 1; lnt >= 0; lnt--)
	{
		if (b[lnt] != '0' && b[lnt] != '1')
			return (0);
		numb += (b[lnt] - '0') * mtpl;
		mtpl *= 2;
	}

	return (numb);
}
