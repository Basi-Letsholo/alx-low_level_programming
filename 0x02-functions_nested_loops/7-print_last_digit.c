#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @n: integer
 * Return: n % 10
 */

int print_last_digit(int n)
{
	/*printf("%d", (n % 10));*/
	int m;

	if (n >= 0)
	{
		m = n % 10;
		_putchar(m + 48);
	}
	else if (n < 0)
	{
		n = n - (n * 2);
		m = n % 10;
		_putchar(m + 48);
	}
	return (m);
}
