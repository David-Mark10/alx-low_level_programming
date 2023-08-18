#include "variadic_functions.h"
/**
 *
 *
 *
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{       
        va_list pstrg;
        unsigned int j;
        char *ptr;

        va_start(pstrg, n);
        
        if (separator != NULL)
	{
                for (j = 0; j < n; j++)
		{
		 	ptr = va_arg(pstrg, char);

			if (ptr[j] == NULL)
				printf(nil);

			printf("%c", ptr[j]);
		}
		printf("\n");

