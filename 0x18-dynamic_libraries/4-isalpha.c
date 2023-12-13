#include "main.h"

/**
 * _isalpha - Func to check if character is alphabetic.
 * @c: The argument character to be checked.
 *
 * Return: return 1 if character is uppercase, letter, lowercase otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
