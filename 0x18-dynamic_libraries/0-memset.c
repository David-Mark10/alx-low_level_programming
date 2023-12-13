#include "main.h"

/**
 * *_memset - functions that filles first N bytes of the memory
 *          of string S(pointer) with the constant byte of B
 * @s: A pointer to the memory area to be filled.
 * @b: The memory area to be filled with character.
 * @n: The filled bytes number.
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int j;

        for (j = 0; j < n; j++)
        {
                s[j] = b;
        }

        return (s);
