#include <stdio.h>
#include "main.h"
/**
 * print_square - entry point
 *
 * Description: prints square of size size
 * @size: length of sqaure side
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
