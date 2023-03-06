#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - finds first occurence of accept in s
 *
 * @s: string
 * @accept: chars to look for
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	int pos = 0, flg = 0;

	while (*(s + i))
	{
		i++;
	}
	pos = i;
	i = 0;

	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flg = 1;
				}
			}
			j++;
		}
		i++;
	}

	if (flg == 1)
	{
		return (&s[pos]);
	}
	return (NULL);
}
