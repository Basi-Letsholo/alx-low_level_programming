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
	ssize_t n, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[l] != '\0')
	{
		l++;
	}

	if (text_content != NULL)
	{
		n = write(fd, text_content, (sizeof(char) * l));
		if (n != l)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
	{
		return (-1);
	}

	return (1);
}
