#include "main.h"

/**
 * _islower - A function to checks if a character is lowercase.
 * @c: argument character to be checked.
 *
 * Return: return 1 or 0 if character is lowercase or otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
