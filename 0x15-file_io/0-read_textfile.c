#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads and prints textfile to std out
 *
 * @filename: file name
 * @letters: number of letters to read and print
 * Return: letters, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char text[1000];
	FILE *fn;
	size_t n;

	if (filename == NULL)
	{
		return (0);
	}
	fn = fopen(filename, "r");

	if (fn == NULL)
	{
		return (0);
	}
	n = fread(text, 1, letters, fn);
	text[n] = '\0';
	printf("%s", text);

	fclose(fn);
	return (letters);
}
