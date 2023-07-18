#include "main.h"
/**
 * main - Entry point
 * description: To print 10 times lower case alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
