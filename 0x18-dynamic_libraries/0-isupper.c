#include "main.h"

/**
 * _isupper - Function that checks for uppercase characters.
 * @c: The argument to be checked.
 *
 * Return: return 1 or 0 if c is uppercase,or otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
