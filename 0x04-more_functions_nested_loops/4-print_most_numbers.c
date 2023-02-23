#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Description: prints numbers 0-9 sans 2 & 4
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + 48);
		}
	}
	_putchar('\n');
}
