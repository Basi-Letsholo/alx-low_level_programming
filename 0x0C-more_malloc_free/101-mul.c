#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/** 
 * main - takes ints from command line to mul
 *
 * @argc: argumunets
 * @argv: array of args
 * Return: int
 */

int main (int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	else if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
