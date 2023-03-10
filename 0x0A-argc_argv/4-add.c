#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints sum of ints in argument
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum, n[100];

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			n[i] = atoi(argv[i]);
			n[argc] = '\0';
			sum = sum + n[i];
		}
		printf("%d\n", sum);
	}
	return (0);
}
