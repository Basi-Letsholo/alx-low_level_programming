#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_times_table - prints the times table for 0 <= n <= 15
 * @n: number
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, num, k;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			if (num < 10)
			{
				if (j > 0)
				{
					for (k = 1; k < 3; k++)
					{
						_putchar(' ');
					}
				}
				_putchar(num + '0');
			}
			else
			{
				print_num(num);
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		if (i != n)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

/**
 * print_num - prints numbers greater than 9 using putchar
 * @num: number
 * Return: void
 */
void print_num(int num)
{
	int arr[3];

	arr[0] = num % 10;
	arr[1] = (num / 10) % 10;
	if (num >= 100)
	{
		arr[2] = (num / 100) % 10;
		_putchar(arr[2] + '0');
	}
	else
	{
		_putchar(' ');
	}
	_putchar(arr[1] + '0');
	_putchar(arr[0] + '0');
}
