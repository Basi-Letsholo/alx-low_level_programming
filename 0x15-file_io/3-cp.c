#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copies content from one file to another
 * @ac: no. of arguments
 * @av: array of arguments
 * Return: 0 on success, else exit
 */

int main(int ac, char **av)
{
	int f_from, f_to;
	char text[1024];
	ssize_t n, m;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(av[1], R_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	/* now we need to read from f_from and save to buffer to send to f_to */
	n = read(f_from, text, sizeof(text));
	if (n == -1)
	{
		close(f_from);
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	m = write(f_to, text, sizeof(text));
	if (m == -1)
	{
		close(f_to);
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close(f_from);
	close(f_to);
	return(0);
}
