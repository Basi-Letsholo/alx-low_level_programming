#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns pointer which contains copy of string
 *
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	char *new = malloc(sizeof(char) * 4109);
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (new)
	{
		for (i = 0; *str != '\0'; i++)
		{
			new[i] = str[i];
		}
		new[i] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new);
}
