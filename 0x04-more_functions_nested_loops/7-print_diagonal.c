#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - entry point
 *
 * Description: prints diagonal line
 * @n: length of diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int b;
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			if (a > 0)
			{
				for (b = 1; b <= a; b++)
				{
					_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
			else if (a == 0)
			{
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
