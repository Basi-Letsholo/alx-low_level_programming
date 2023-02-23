#include <stdio.h>
#include "main.h"
/**
 * more_numbers - entry point
 *
 * Description: prints numbers 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int i;
	int a;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				a = n - 10;
				_putchar(49);
			}
			else
			{
				a = n;
			}
			_putchar(a + 48);
		}
		_putchar('\n');
	}
}
