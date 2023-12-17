#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 *
 * @file: file to store chars for
 *
 * Return: allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors
 *
 * @fd: file descriptor to close
 */

void close_file(int fd)
{
	int c;
	
	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy the contents of a file onto another
 *
 * @argc: # of arguments supplied to function
 * @argv: array of pointers to arguments
 *
 * Return: 0 if successful
 *
 * Description: incorrect argument count - 97
 *		source file related error - 98
 *		target file related error - 99
 *		file closing related error - 100
 */

int main(int argc, char *argv[])
{
	int source, target, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	r = read(source, buffer, 1024);
	target = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(target, buffer, r);
		
		if (target == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(source, buffer, 1024);
		target = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(source);
	close_file(target);

	return (0);
}
