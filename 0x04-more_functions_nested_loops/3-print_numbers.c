#include <stdio.h>
#include "main.h"
/**
 * print_numbers - entry point
 *
 * Description: prints numbers 0-9
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
