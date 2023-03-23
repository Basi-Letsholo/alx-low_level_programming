#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings from parameters
 *
 * @separator: separates strs
 * @n: number of strs
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		if (s != NULL && i < n - 1)
		{
			printf("%s%s", s, separator);
		}
		if (s != NULL && i == n - 1)
		{
			printf("%s", s);
		}
	}
	printf("\n");
	va_end(args);
}
