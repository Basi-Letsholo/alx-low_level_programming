#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - finds value of a bit at a given index
 *
 * @n: intger
 * @index: index
 * Return: value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
