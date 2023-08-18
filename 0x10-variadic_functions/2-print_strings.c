#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of string
 *
 * Return: return northing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pstrg;
	unsigned int j;
	char *ptr;

	va_start(pstrg, n);

	for (j = 0; j < n; j++)
	{
		ptr = va_arg(pstrg, char *);

		if (ptr == NULL)
			printf(nil);

		else 
			printf("%s", ptr);

		if (j != (n + 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pstrg);
}
