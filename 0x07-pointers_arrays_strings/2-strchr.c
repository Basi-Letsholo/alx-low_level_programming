#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * *_strchr - looks for first occurence of char c in the string
 *
 * @s: string
 * @c: char to look for
 * Return: string from c, else '\0'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (c == '\0')
		{
			return (s);
		}
	}
	return ('\0');
}
