#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the num of bits you would need to flip to get new num
 * @n: int 1
 * @m: int 2
 * Return: bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int l = 0, i;
	unsigned long int buff;

	if (n == m)
	{
		return (0);
	}

	buff = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if ((buff & (1ul << i)) != 0)
		{
			l++;
		}
	}
	return (l);
}
