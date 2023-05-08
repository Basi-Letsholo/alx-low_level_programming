#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file to read
 * @letters: no. of letters to read and print
 * Return: letters read and printed, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, r;
	int fd;
	char *text = NULL;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	text = (char *)malloc(sizeof(char) * (letters + 1));
	if (text == NULL)
	{
		close(fd);
		return (0);
	}
	re = read(fd, text, letters);
	if (re == -1)
	{
		free(text);
		close(fd);
		return (0);
	}

	r = write(STDOUT_FILENO, text, re);
	if (r == -1 || r != re)
	{
		free(text);
		close(fd);
		return (0);
	}

	free(text);
	close(fd);
	return (re);
}
