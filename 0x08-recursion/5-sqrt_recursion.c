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
	int r, s;

	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	r = n;
	s = n / r;
	if (r != s)
	{
		r = _sqrt_recursion(n - 1);
	}
	if (r == s)
	{
		return (s);
	}
	else return (-1);
}
