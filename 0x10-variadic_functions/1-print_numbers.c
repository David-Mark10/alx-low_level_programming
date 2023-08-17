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
	va_list num;
        unsigned int j;
	
	num = 0;

	va_start (num, n);

	for (j = 0; j <= n; j++)
		{
			num = va_arg(num, int);
			printf("%d\n", num);

			if (j != (n - i); && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(num);
}
