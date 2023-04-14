#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
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
	char *text;
	int fn;
	ssize_t n;

	if (filename == NULL)
	{
		return (0);
	}
	fn = open(filename, O_RDONLY);

	if (fn == -1)
	{
		return (0);
	}

	text = (char *)malloc(sizeof(char) * (letters + 1));
	n = read(fn, text, letters);
	/*text[n] = '\0'; */
	write(STDOUT_FILENO, text, letters);

	close(fn);
	free(text);
	return (n);
}
