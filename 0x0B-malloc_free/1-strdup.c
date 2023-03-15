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
	char *new = (char *)malloc(sizeof(char) * 4109);

	if (new == NULL)
	{
        	return((char *)NULL);
	}
	if (new && *str != '\0')
	{
		*new = *str;
		new++;
		str++;
	}
	else 
	{
		return (NULL);
	}
	*new = '\0';
	return (new);
}
