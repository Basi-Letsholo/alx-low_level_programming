#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file to append to
 * @text_content: text to add
 * Return: 1 on success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	/*char text[1000];*/
	ssize_t n;
	off_t off;

	if (filename == NULL)
	{
		return (-1);
	}
	fa = open(filename, O_RDWR);

	if (fa == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		off = lseek(fa, 0, SEEK_END);
		n = write(fa, text_content, strlen(text_content));
		if (n == -1)
		{
			close(fa);
			return (-1);
		}
		off += n;
	}
	close(fa);
	return (1);

}
