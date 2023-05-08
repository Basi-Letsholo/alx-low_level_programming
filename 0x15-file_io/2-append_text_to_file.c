#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t l = 0;
	ssize_t r;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	while (text_content[l] != '\0')
	{
		l++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	
	r = write(fd, text_content, l);
	if (r == -1)
	{
		close(fd);
		return (-1);
	}
	
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
