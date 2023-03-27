#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts strings to integers
 *
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int x = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 47 && s[i] <= 57)
		{
			x = x * 10 + s[i] - '0';
		}
		else
		{
			return (0);
		}
	}
	return (x);
}
