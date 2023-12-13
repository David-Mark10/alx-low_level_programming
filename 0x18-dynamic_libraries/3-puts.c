#include "main.h"

/**
 * _puts - function that prints a string
 * @str: argument string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);/*counts each allocated character memory*/

	_putchar('\n');
}
