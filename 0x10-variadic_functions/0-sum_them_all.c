#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function that sum all the parameters.
 * @n: the number of parameters.
 * @...: other parameters
 * Return: return 0 if n is null.or sum if n is not equal to 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sma
	unsigned int j;

	int sum = 0;

	va_start(sma, n);

	if (n != 0)
	{
		for (j = 0; j < n; j++)
		sum += va_arg(sma, int);
	}

	va_end(sma);
	return (sum);
}
