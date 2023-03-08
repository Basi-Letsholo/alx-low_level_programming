#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - looks for prime numbers
 *
 * @n: integer
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i = n, l, m;

	if (n <= 1)
	{
		l = 0;
	}
	if ( n == 2)
	{
		l = 1;
	}
	m = i % is_prime_number(n - 1);
	if (m == 0)
	{
		l = 0;
	}
	else
	{
		l = 1;
	}
	return (l);
}
