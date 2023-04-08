#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at the index
 *
 * @n: int
 * @index: index
 * Return: 1 on success, else 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n = (*n | (1UL << index));
	return (1);
}
