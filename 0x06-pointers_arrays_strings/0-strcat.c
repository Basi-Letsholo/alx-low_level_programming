#include <stdio.h>
#include "main.h"
/**
 * *_strcat - entry point
 *
 * Description: appends string to another
 * @dest: str added here
 * @src: str to be added
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
