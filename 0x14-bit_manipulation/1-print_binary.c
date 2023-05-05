#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 64 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			break;
		}
	}
	while (i >= 0)
	{
		j = (n >> i) & 1;
		_putchar(j + '0');
		i--;
	}
}
