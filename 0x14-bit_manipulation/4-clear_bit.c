#include <stdio.h>
/**
 * clear_bit - setts value of bit to 0 at index
 * @n: int
 * @index: index of bit
 * Return: 1 on success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
	{
		return (-1);
	}

	mask = ~(1ul << index);
	*n = *n & mask;

	return (1);
}
