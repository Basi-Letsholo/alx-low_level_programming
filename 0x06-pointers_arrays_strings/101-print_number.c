#include <stdio.h>
#include "main.h"
/**
 * print_number - prints numbers
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int u, t, h, th;

	if (n == 0)
	{
		_putchar(48);
	}
	u = n % 10;
	t = n % 100;
	h = n % 1000;
	th = n % 10000;
	if (n >= 1000 && n < 1000 )
	{
		_putchar(th + 48);
		_putchar(h + 48);
		_putchar(t + 48);
		_putchar(u + 48);
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(h + 48);
		_putchar(t + 48);
		_putchar(u + 48);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(t + 48);
		_putchar(u + 48);
	}
}
