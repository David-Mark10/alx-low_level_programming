#include "main.h"
/**
 * _strlen_recursion: command to count and print the lenght of a string.
 *
 * Return: always 0 (success)
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
