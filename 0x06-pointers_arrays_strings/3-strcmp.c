#include <stdio.h>
#include "main.h"
/**
 * _strcmp - entry point
 *
 * Description: compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings the same, otherwise difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, m;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i + 1] != s2[i + 1])
	{
		m = s1[i] - s2[i];
	}
	else
	{
		m = 0;
	}
	return (m);
}
