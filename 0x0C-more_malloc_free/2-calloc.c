#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory to an array
 *
 * @nmemb: array size
 * @size: size of bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc((nmemb * size) + 1);
	if (a)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			a[i] = 0;
		}
	}
	else
	{
		return (NULL);
	}
	return (a);
}
