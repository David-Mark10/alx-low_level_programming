#include <stdio.h>
/**
 * main print out argument that is pass to it.
 * @argc: Is the number argument pass to it.
 * @argv: prints out the value of the argument pass to it.
 *
 * Return: always 0 (success)
 */
int main(int argc,  char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
