#include "variadic_functions.h"
/**
 * sum_them_all - this sum all the parameters.
 * @n: the first parameter.
 *
 * Return: return 0 if n is null.
 * or sum if n is not equal to 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;
	int total;

	total = 0;
	j = 0;

	va_start(arg, n);

	if (j != 0)
	{
		for (; j <= n; j++)
		total = va_arg(arg, int);
	}
	va_end(arg);
	return (total);
}
