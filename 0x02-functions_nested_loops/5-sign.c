#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 * description: prints sign of integer i.e positive or negative
 * @n: integer
 * return:
 */

int print_sign(int n)
{
	if (n == 0)
	{
		printf('0');
		return (0);
	}
	else if (n > 0)
	{
		printf('+');
		return (1);
	}
	else if (n < 0)
	{
		printf('-');
		return (-1);
	}
}
