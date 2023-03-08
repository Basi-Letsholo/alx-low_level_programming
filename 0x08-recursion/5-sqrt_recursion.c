#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns square root of n
 *
 * @n: integer
 * Return: square root
 */


int _sqrt_recursion(int n)
{
	int l = 1, r;

	if (n < 1)
	{
		return (-1);
	}
	_sqrt_recursion(l * l <= n);
	l++;
	if (l * l == n)
	{
		r = l;
	}
	return (r);
}
