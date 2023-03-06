#include <stdio.h>
#include "main.h"
/**
 * *_strchr - looks for first occurence of char c in the string
 *
 * @s: string
 * @c: char to look for
 * Return: string from c, else '\0'
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*s = s[i];
		}
		else
		{
			s = '\0';
		}
	}
	return (s);
}
