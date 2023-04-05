#include <string.h>
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
	int i, j, k, l;
	char *new;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	l = 0;

	for (i = 0; i < ac; i++)
	{
		l = strlen(av[i]) + 1 + l;
	}
	new = malloc((sizeof(char) * l) + 1);

	if (new == NULL)
	{
		return (NULL);
	}
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k++] = av[i][j];
		}
		new[k++] = '\n';
	}
	new[k] = '\0';
	return (new);
}
