#include <stdio.h>
#include "main.h"
/**
 * print_line - entry point
 *
 * Description: prints a straight line of length n
 * @n: length of line
 * Return: void
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
