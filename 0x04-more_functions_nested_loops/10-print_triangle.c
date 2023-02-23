#include <stdio.h>
#include "main.h"
/**
 * print_triangle - entry point
 *
 * Descriptions: prints triangle of height size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int k;
	int l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - i; k >= 1; k--)
			{
				_putchar(' ');
			}
			for (l = 1; l <= i; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
