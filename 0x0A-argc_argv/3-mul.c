#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints product of two integers in argv
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	return (0);
}
