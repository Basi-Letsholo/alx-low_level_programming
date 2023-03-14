#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *new = (char *)malloc(4190 * 2);
	int i, j, l = 0;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (i = 0; *s1 != '\0'; i++)
	{
		*(new + i) = *(s1 + i);
		l++;
	}
	for (j = l + 1; *s2 != '\0'; j++)
	{
		for (i = 0; *s2 != '\0'; i++)
		{
			*(new + j) = *(s2 + i);
		}
	}
	new[j] = '\0';
	return (new);
}
