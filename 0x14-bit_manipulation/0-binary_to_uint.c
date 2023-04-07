#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _pow - exponential function, same as _pow but for unsigned int
 * @base: base of exp
 * @exp: power of exp
 * Return: result
 */

unsigned int _pow(unsigned int base, unsigned int exp)
{
	unsigned int result = 1;

	while (exp != 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i, l;
	int *new = NULL;

	if (b == NULL)
	{
		return (0);
	}
	l = strlen(b);
	new = (int *)malloc(sizeof(int) * l);

	for (i = 0; i < l; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			new[i] = b[i] - '0';
		}
		else
		{
			free(new);
			return (0);
		}
	}
	for (i = 0; i < l; i++)
	{
		n = n + ((_pow(2, l - i - 1)) * new[i]);
	}
	free(new);
	return (n);
}
