#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates memory to a buffer that will
 * used to to hold data read from one file before writing it to another file
 * @file: The name of the file buffer is storing chars for.
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - function is responsible for
 * closing a file after it has been used
 * @fd: The descriptor to be closed
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
 * main - where the copying process takes place
 * @argc: number of arguments given to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to or file_from cannot be closed - exit code 100
 * f file_to cannot be created or written to - exit code 99
 */
int main(int argc, char *argv[])
{
	int copy_from, paste_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	copy_from = open(argv[1], O_RDONLY);
	r = read(copy_from, buffer, 1024);
	paste_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (copy_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(paste_to, buffer, r);
		if (paste_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(copy_from, buffer, 1024);
		paste_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(copy_from);
	close_file(paste_to);

	return (0);
}
