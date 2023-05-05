#include <stdio.h>
/**
 * set_bit - sets bit to 1 at given index
 * @n: int
 * @index: index of bit
 * Return: 1 on success, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
	{
		return (-1);
	}

	mask = 1ul << index;
	*n = *n | mask;
	return (1);
}
