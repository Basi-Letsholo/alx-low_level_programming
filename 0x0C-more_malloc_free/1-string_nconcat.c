#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concats 2 strings, up to n bytes of str 2
 *
 * @s1: str 1
 * @s2: str2
 * @n: bytes/len of str 2
 * Return: new concatted str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t p1, p2, p3, i = 0;
	char *new;
	char s = '\0';

	if (s1 == NULL)
	{
		s1 = &s;
	}
	if (s2 == NULL)
	{
		s2 = &s;
	}
	p1 = strlen(s1);
	p2 = strlen(s2);
	if (n < p2)
	{
		p3 = n;
	}
	else if (n >= p2)
	{
		p3 = p2;
	}
	new = malloc(p1 + p3 + 1);

	if (new)
	{
		while (*s1 != '\0')
		{
			new[i] = *s1;
			s1++;
			i++;
		}
		while (i < p1 + p3)
		{
			new[i] = *s2;
			s2++;
			i++;
		}
		new[i] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new);
}
