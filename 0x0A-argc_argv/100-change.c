#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints min coins needed for change
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, v, w, x, y, z, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n <= 0)
		{
			printf("0\n");
		}
		if (n > 0)
		{
			v = n / 25;
			w = (n - (25 * v)) / 10;
			x = (n - (25 * v) - (10 * w)) / 5;
			y = (n - (25 * v) - (10 * w) - (5 * x)) / 2;
			z = n - (25 * v) - (10 * w) - (5 * x) - (2 * y);
			change = v + w + x + y + z;
			printf("%d\n", change);
		}
	}
	return (0);
}
