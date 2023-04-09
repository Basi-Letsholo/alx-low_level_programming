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

	if (filename == NULL)
	{
		return (0);
	}
	fn = fopen(filename, "r");

	fgets(text, letters, fn);
	text[letters] = '\0';
	printf("%s\n", text);

	fclose(fn);
	return (letters);
}
