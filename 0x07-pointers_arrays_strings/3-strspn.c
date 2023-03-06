#include <stdio.h>
#include "main.h"
/**
 * _strspn - returns how many bytes from accept match s
 *
 * @s: string
 * @accept: chars to look for in s
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;
	char *count;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				*count = s[i];
			}
		}
	}
	while (count[n] != '\0')
	{
		n++;
	}
	return (n);
}
