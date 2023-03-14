#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, l = 0, k = 0;

	for (i = 0; *s1 != '\0'; i++)
	{
		l++;
	}
	for (i = 0; *s2 != '\0'; i++)
	{
		k++;
	}
	new = malloc(l + k + 1);
	for (i = 0; i < l; i++)
	{
		new[i] = s1[i];
	}
	for (i = 0; i < k; i++)
	{
		for (j = l; j < (l + k); j++)
		{
			new[j] = s2[i];
		}
	}
	new[j] = '\0';
	if (new == NULL)
	{
		return (NULL);
	}
	return (new);
}
