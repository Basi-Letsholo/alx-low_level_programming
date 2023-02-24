#include <stdio.h>
#include "main.h"
/**
 * print_number - entry point
 *
 * Description: prints integers
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int u;
	int t;
	int h;
	int th;

	if (n >= 0 && n < 10)
	{
		_putchar(n + 48);
	}
	if (n >= 10 && n < 100)
	{
		u = n % 10;
		t = (n / 10) % 10;
		_putchar(t + 48);
		_putchar(u + 48);
	}
	if (n >= 100 && n < 1000)
	{
		u = n % 10;
		t = (n / 10) % 10;
		h = (n / 100) % 10;
		_putchar(h + 48);
		_putchar(t + 48);
		_putchar(u + 48);
	}
	if (n >= 1000 && n < 10000)
	{
		u = n % 10;
		t = (n / 10) % 10;
		h = (n / 100) % 10;
		th = (n / 1000) % 10;
		_putchar(th + 48);
		_putchar(h + 48);
		_putchar(t + 48);
		_putchar(u + 48);
	}
	if (n < 0 && n > -10)
	{
		n = n - (2 * n);
		u = n % 10;
		_putchar(45);
		_putchar(u + 48);
	}
	if (n <= -10 && n > -100)
	{
		n = n - (2 * n);
		u = n % 10;
		t = (n / 10) % 10;
		_putchar(45);
		_putchar(t + 48);
		_putchar(u + 48);
	}
}
