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
	int i, sum, *n[100];

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			n[i] = atoi(argv[i]);
			n[argc] = '\0';
			if (n[i] == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + n[i];
			}
		}
	}
	return (0);
}
