#include "main.h"
/**
 * print_sign - Check Holberton an input number
 * Description: This is my function to print
 * Return: 1 if number is a positive, o if number is 0
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
