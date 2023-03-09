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
	int i = n - 1, l = 0;

	if (i < 1)
	{
		l = 0;
	}
	if (i == 1)
	{
		l = 1;
	}
	else if (n % i == 0)
	{
		l = 0;
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
	return (l);
}
