#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concats arguments to a string
 *
 * @ac: number of commands
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int 
	char *new;

	new = (char *)malloc((sizeof(int) * ac) * (sizeof(char) * ;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (new)
	{
		for (i = 0; **av != '\0'; i++)

	}
	else
	{
		return (NULL);
	}
	return (new);
}
