#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * print_last_digit - entry point
 *
 * @n: integer
 * Return: n % 10
 */

int print_last_digit(int n)
{
	int m;

	if (n == INT_MIN)
	{
		m = - (n % 10);
	}
	else
	{
		if (n < 0)
		{
			n = -n;
		}
		m = n % 10;
	}

	_putchar(m + '0');	
	return (m);
}
