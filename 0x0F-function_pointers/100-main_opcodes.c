#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of function
 *
 * @argc: number of commands
 * @argv: array of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argc == 2)
	{
		x = atoi(argv[1]);
		if (x < 0)
		{
			printf("Error\n");
			exit(2);
		}
		else
		{
			printf("%x\n", x);
		}
	}
}
