#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers given as parameters
 *
 * @separator: str to be printed between num
 * @n: number of ints
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (separator)
		{
			if (i < n - 1)
			{
				printf("%d%s", x, separator);
			}
			else
			{
				printf("%d", x);
			}
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	va_end(args);
}
