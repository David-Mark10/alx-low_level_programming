#include "variadic_functions.h"
/**
 * sum_them_all - a function that sum all the parameters.
 * @n: the number of parameters.
 * @...: other parameters
 * Return: return 0 if n is null.or sum if n is not equal to 0.
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list li;
	int sum = 0;
	unsigned int j;

	va_start(li, n);

	if (n != 0)
	{
		for (j = 0; j < n; j++)
			sum += va_arg(li, int);
	}

	va_end(li);
	return (sum);

}
