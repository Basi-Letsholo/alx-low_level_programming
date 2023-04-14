#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: file to create
 * @text_content: string to write to file
 * Return: 1 on success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fw;
	ssize_t n;
	/*char text[1000];*/

	if (filename == NULL)
	{
		return (-1);
	}
	fw = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fw == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		n = write(fw, text_content, strlen(text_content));
		if (n == -1)
		{
			close(fw);
			return (-1);
		}
	}
	close(fw);
	return (1);
}
