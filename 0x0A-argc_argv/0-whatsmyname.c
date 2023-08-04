#include <stdio.h>
/**
 * main - print argument name.
 * @argc: number of argument.
 * @argv: value of argument.
 *
 * Return:0.
 */
int main(int argc,  char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
