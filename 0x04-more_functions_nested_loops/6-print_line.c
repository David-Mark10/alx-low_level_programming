#include "main.h"
/**
 * print_line - This command print a stratight line on the terminal.
 *
 * @n: An input integer
 *
 * Description: This code will print a straight line and a new line
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
