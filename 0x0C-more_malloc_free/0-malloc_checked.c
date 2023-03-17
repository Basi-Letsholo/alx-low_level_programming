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
	void *new = malloc(b);

	if (new)
	{
		return (new);
	}
	else
	{
		exit (98);
	}
}
