#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 *
 * @n: num 1
 * @m: num 2
 * Return: no. of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a[64] = {0}, b[64] = {0}, i, l = 0;

	if (n == m)
	{
		return (0);
	}
	for (i = 0; i < 64; i++)
	{
		a[i] = (n >> i) & 1;
		b[i] = (m >> i) & 1;
	}
	for (i = 0; i < 64; i++)
	{
		if (a[i] != b[i])
		{
			l += 1;
		}
	}
	return (l);
}
