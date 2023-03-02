#include <stdio.h>
#include "main.h"
/**
 * *cap_string - entry point
 *
 * Description: capitalises string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int i;
	char *s = str;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == 32 || s[i] == '\n') && (s[i + 1] <= 122 && s[i + 1] >= 97))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if ((s[i] == '\t' || s[i] == 44) && (s[i + 1] <= 122 && s[i + 1] >= 97))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if ((s[i] == 46 || s[i] == 59) && (s[i + 1] <= 122 && s[i + 1] >= 97))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if ((s[i] == 63 || s[i] == 33) && (s[i + 1] <= 122 && s[i + 1] >= 97))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if ((s[i] == 40 || s[i] == 34) && (s[i + 1] <= 122 && s[i + 1] >= 97))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		if ((s[i] == 41 || s[i] == 123 || s[i] == 125) && (s[i + 1] <= 122 && s[i + 1] >= 97))
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
