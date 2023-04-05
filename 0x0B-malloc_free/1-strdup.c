#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_strdup - returns pointer which contains copy of string
 *
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	size_t l;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	l = strlen(str) + 1;
	new = malloc(l);

	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, str);
	return (new);

}
