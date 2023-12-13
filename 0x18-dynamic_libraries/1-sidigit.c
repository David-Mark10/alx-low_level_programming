#include "main.h"

/**
 * _isdigit - function that Checks digit from 0 to 9
 * @c:  the argument value to be checked
 *
 * Return: return 1 or 0 if true, otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
