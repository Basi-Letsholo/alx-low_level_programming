#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates file
 * @filename: file name
 * @text_content: content
 * Return: 1 on success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t n;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	n = write(fd, text_content, sizeof(text_content));
	if (n != sizeof(text_content))
	{
		return (-1);
	}
	close(fd);
	if (close(fd) == -1)
	{
		return (-1);
	}

	return (1);
}
