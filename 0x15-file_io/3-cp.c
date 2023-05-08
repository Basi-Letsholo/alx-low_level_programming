#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copies cntent of file to another
 * @ac: no. of arguments
 * @av: array of arguments
 * Return: 1 on success
 */

int main(int ac, char *av[])
{
	int fr, fw;
	char text[1024];
	ssize_t r,w;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fr = open(av[1], O_RDONLY);
	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((r = read(fr, text, 1024)) > 0)
	{
		w = write(fw, text, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fr) == -1 || close(fw) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (1);
}
