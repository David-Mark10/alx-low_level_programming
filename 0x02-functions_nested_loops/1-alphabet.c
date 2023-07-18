#include "main.h"
/**
 * main - Entry Point
 *Description: It prints the alphabet in lower case.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
