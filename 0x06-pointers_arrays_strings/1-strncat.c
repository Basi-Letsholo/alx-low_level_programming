#include <stdio.h>
#include "main.h"
/**
 * *_strncat - entry point
 *
 * Description: appends a string up to n bytes
 * @dest: str to be appended
 * @src: str thats added
 * @n: how many bytes
 * Return: char i.e. appended string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
