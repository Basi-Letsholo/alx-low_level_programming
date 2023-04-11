#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	FILE *fw;
	ssize_t n;

	if (filename == NULL)
	{
		return (-1);
	}
	fw = fopen(filename, O_WRONLY | O_RDONLY | O_CREAT, 600);
	n = fwrite(fw, text_content, strlen(text_content));
	fclose(fw);
	return (1);
}
