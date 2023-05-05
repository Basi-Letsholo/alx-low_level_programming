#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary string
 * Return: uint, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, l, n, *new = NULL;

	if (b == NULL)
	{
		return (0);
	}
	l = _strlen(b);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		else
		{
			new = malloc(sizeof(unsigned int) * (l + 1));
			if (new == NULL)
			{
				return (0);
			}
			if (b[i] == '0')
			{
				new[i] = 0;
			}
			else if (b[i] == '1')
			{
				new[i] = 1;
			}
		}
	}
	for (i = l - 2; i >= 1; i--)
	{
		n += ((_pow(2, i + 1)) * new[i + 1]);
	}
	return (n);
}
