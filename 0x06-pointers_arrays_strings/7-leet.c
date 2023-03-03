#include <stdio.h>
#include "main.h"
/**
 * *leet - entry point
 *
 * Description: converts to leetspeak
 * @str: string
 * Return: char
 */

char *leet(char *str)
{
	char *s;
	int i, n = 0;
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char r[5] = {'4', '3', '0', '7', '1'};
	
	s = str;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (n < 5)
		{
			if (s[i] == a[n] || s[i] == b[n])
			{
				s[i] = r[n];
			}
		}
	}
	return (s);
}
