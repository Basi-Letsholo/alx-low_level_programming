#include <stdio.h>
#include "main.h"
/**
 * main - prints name of program
 *
 * @argc: how many command line arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
