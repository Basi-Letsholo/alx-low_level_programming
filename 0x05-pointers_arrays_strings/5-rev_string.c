#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 *
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, l = 1, m = 0;
	char *begin, *end, temp;

	begin = s;
	end = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	if (l % 2 == 0)
	{
		m = l / 2;
	}
	else
	{
		m = (l) / 2;
	}
	for (i = 0; i < l - 1; i++)
	{
		end++;
	}
	for (i = 0; i < m - 1; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
	*s = temp;
}
