#include "main.h"
/**
 * _factorial: this command prints the factoria of a given number
 *
 * return: always 0 (success)
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	next = factorial(n - 1);
	return (n * next);
}
