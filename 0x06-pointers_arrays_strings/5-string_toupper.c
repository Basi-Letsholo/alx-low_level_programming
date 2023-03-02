#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - entry point
 *
 * Description: makes lowercase into upper
 * @str : string
 * Return: char
 */

char *string_toupper(char *str)
{
	char *s = str;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
