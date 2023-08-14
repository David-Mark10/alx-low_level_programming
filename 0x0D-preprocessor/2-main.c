#include <stdio.h>
/**
 * main - to print a program that prints it name as output
 *
 * Return: return the name of the program.
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}	
