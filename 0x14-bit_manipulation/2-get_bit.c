#include <stdio.h>
/**
 * get_bit - finds the bit at the given index
 * @n: number
 * @index: index of bit
 * Return: value of bit at index, else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j, mask;

	if (index > 63)
	{
		return (-1);
	}
	mask = 1ul << index;
	j = (n & mask) >> index;

	return (j);
}
