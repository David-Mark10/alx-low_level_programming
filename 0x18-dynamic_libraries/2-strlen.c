#include "main.h"

/**
 * _strlen - A functions that returns string length.
 * @s: The string to get its length.
 *
 * Return: The length of @s
 */

int _strlen(char *s)
{
	int lenth = 0;

	while (s[lenth] != '\0')
	{
		lenth++;
	}

	return (lenth);
}
