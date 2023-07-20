#include "main.h"
/**
 * Main - Entry Point
 *
 * Description: This code will print a straight line
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
