#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: byte size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *c;
	int *i;
	float *f;
	double *d;

	if (c)
	{
		c = malloc(b);
	}
	if (i)
	{
		i = malloc(b);
	}
	if (f)
	{
		f = malloc(b);
	}
	if (d)
	{
		d = malloc(b);
	}
	else
	{
		return (98);
	}
}
