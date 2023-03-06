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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return(s + i);
		}
		else
		{
			return ('\0');
		}
	}
}
