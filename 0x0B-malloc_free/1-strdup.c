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
	int i, l = 0, k = 0;
	char *new = (char *)malloc(sizeof(char) * l);

	for (i = 0; *str != '\0'; i++)
	{
		l++;
	}
	for (i = 0; *str != '\0'; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *new != '\0'; i++)
	{
		k++;
	}
	if (k < l)
	{
		return (NULL);
	}
	return (new);
	free(new);
}
