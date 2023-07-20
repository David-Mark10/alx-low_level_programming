#include "main.h"
/**
 * print_most_numbers - this function prints all numbers except 2 & 4.
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
