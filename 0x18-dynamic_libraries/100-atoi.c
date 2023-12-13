#include "main.h"

/**
 * _atoi - Function that Converts string to an integer.
 * @s: argument string to be converted.
 *
 * Return: return the integer value of the converted string.
 */

int _atoi(char *s)
{
	int j, a, n, len, b, digt;

	j = a = n = len = b = digt = 0;
	
	while (s[len] != '\0')
		len++;

	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++a;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digt = s[j] - '0';
			if (a % 2)
				digt = -digt;
			n = n * 10 + digt;
			b = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			b = 0;
		}
		j++;
	}

	if (b == 0)
		return (0);

	return (n);
}
