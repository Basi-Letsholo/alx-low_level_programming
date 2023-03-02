#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - entry point
 *
 * Description: copies first n chars of src into dest
 * @dest: to be copied here
 * @src: copies from here
 * @n: how many chars to copy from src
 * Return: char i.e dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
