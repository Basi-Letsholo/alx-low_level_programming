#include <stdio.h>
#include "main.h"
/**
 * print_sign - entry point
 * Description: prints sign of integer i.e positive or negative
 * @n: integer
 * Return: 1 if positive, 0 if 0, or -1 if negative
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
