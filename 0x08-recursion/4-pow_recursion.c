#include "main.h"
/**
 * _pow_recursion a fuction that prints out the value
 * of x raised to power y
 *
 * return: always return 0 (success)
 */
int _pow_recursion(int x, int y)
{
		if (y < 0)
			return (-1);
		else if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
}
