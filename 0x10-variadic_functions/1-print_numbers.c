#include "variadic_functions.h"
/**
 * print_numbers - functions that print numbers and new lines
 * @separator: string to be printed between numbers
 * @n: the number of integer
 *
 * Return: nothing since it type is void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list lis;
	unsigned int i;

	va_start(lis, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lis, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lis);

}
