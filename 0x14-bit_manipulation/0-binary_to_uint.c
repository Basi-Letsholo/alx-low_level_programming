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
	unsigned int i, l = 0, *new = NULL, n = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			free(new);
			return (0);
		}
		l++;
	}
	new = malloc(sizeof(int) * (l + 1));
	if (new == NULL)
	{
		return (0);
	}
	for (i = 0; i < l; i++)
	{
		if (b[i] == '1')
		{
			new[i] = 1;
		}
		else
		{
			new[i] = 0;
		}
	}
	for (i = 0; i < l; i++)
	{
		n += new[l - 1 - i] * (1 << i);
	}
	free(new);
	return (n);

}
