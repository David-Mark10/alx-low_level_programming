#include "main.h"
/**
 * swap_int - command to swaps pointers in array
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
