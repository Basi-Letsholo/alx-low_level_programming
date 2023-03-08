#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - returns value of x to the power y
 *
 * @x: base of exponent
 * @y: power of exponent
 * Return: answer
 */

int _pow_recursion(int x, int y)
{
	int l = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	l = x * _pow_recursion(x, y - 1);
	return (l);
}
