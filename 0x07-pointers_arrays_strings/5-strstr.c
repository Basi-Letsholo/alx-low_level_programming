#include <stdio.h>
#include "main.h"
/**
 * *_strstr - finds the first string needle in the string haystack
 *
 * @haystack: str to lok through
 * @needle: str to look for
 * Return: Null or str
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, l = 0, k = 0, f = 0;

	while (*needle != '\0')
	{
		l++;
	}
	while (*haystack != '\0')
	{
		k++;
	}
	while (*(haystack + i) != '\0')
	{
		while (*(needle + j) != '\0')
		{
			if (haystack[i] == needle[j] && haystack[i + l - 1] == needle[j + l - 1])
			{
				if (i <= k - l)
				{
					f = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (f == 1)
	{
		return (&haystack[k]);
	}
	return (NULL);
}
