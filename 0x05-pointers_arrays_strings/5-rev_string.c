#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0, l = 0;

	while (*s != '\0')
	{
		l++;
	}
	j = l - 1;
	for (i = 0; i < l; i++)
	{
		s[i] = s[j];
		j--;
	}
	s[i] = '\0';
}
