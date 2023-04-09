#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at the index
 *
 * @n: int
 * @index: index
 * Return: new int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 64)
	{
		return (-1);
	}
	mask = ~(1 << index);
	*n = *n &  mask;
	return (1);
}
