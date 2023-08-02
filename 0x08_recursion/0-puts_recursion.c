#include "main.h"
/**
 * -puts_recursion: print a string followed by a new line.
 *
 * Return: always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
