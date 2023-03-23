#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all types of arguments
 *
 * @format: list of types of arguments passed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int c;
	int i;
	double f;
	char *s;
	int l = strlen(format), n;

	va_list args;
	va_start(args, format);
	for (n = 0; n < l; n++)
	{
		if (format[n] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
			if (n < l - 1)
			{
				printf(", ");
			}
		}
		else if (format[n] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
			if (n < l - 1)
                        {
                                printf(", ");
                        }
		}
		else if (format[n] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
			if (n < l - 1)
                        {
                                printf(", ");
                        }
		}
		else if (format[n] == 's')
		{
			s = va_arg(args, char *);
			printf("%s", s);
			if (n < l - 1)
                        {
                                printf(", ");
                        }
		}
	}
	printf("\n");
	va_end(args);
}
