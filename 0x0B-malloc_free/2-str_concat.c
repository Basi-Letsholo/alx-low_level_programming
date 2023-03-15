#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *str_concat - concats 2 strings
 *
 * @s1: str 1
 * @s2: str 2
 * Return: a
 */

char *str_concat(char *s1, char *s2)
{
	size_t p1, p2, p3, i = 0;
	char *a;

	p1 = strlen(s1);
	p2 = strlen(s2);
	p3 = p1 + p2 + 1;
	a = malloc(p3);

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	if (a)
	{
		while (*s1 != '\0')
		{
			a[i] = *s1;
			s1++;
			i++;
		}
		while (*s2 != '\0')
		{
			a[i] = *s2;
			s2++;
			i++;
		}
		a[i] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (a);
}
