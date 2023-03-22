#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - prints result from command, depending on operation
 *
 * @argc: command
 * @argv: array of commands
 * Return: result
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 4)
	{
		printf("Error");
		exit (98);
	}
	else
	{
		num1 = atoi(argv[0]);
		num2 = atoi(argv[2]);
	}
}
