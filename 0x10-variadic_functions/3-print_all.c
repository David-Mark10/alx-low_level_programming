#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function that prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int j = 0;
	char *temp

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[j])
	{
		switch (format[j])
		{
			case 'd':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'c':
				printf("%d", va_arg(ap, int));
				break;
			case 'b':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 'a':
				temp = va_arg(ap, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[j] == 'd' || format[j] == 'c' || format[j] == 'b' ||
					format[j] == 'a') && format[(j + 1)] != '\0')
			printf(", ");
		j++;
	}
	va_end(ap);
	printf("\n");
}
