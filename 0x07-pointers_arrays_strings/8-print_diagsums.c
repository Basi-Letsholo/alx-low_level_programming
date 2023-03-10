#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of both diagonals
 *
 * @a: array
 * @size: size of diagonal/matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
				printf("%d", sum1);
			}
		}
		for (j = size - 1; j >= 0; j--)
		{
			if ((i + j) == size - 1)
			{
				sum2 += a[i][j];
				printf("%d", sum2);
			}
		}
	}
}
