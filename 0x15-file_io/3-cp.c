#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocate Memory to BUffer that will
 * use to hold DAta read From one File before writing it to another file
 * @file: The name of the File Buffer is Storing Chars for.
 * Return: pointer TO Newly-allocated buffer.
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
 * close_file - Function Responsible for
 * Closing a File After it's been used
 * @fd: The descriptor to Closed
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - where the copying Process takes place
 * @argc: num of Arguments given to the program.
 * @argv: An Array of pointers to the arguments.
 * Return: 0 on Success
 * Description: If the Argument Count is incorrect - Exit code 97.
 * If file_from doesn't Exist or Cannot be read - exit code 98
 * If file_to or File_from can'T be closed - exit Code 100
 * f file_to cant created or Written to - exit Code 99
 */
int main(int argc, char *argv[])
{
	int coppy_from, ppaste_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	coppy_from = open(argv[1], O_RDONLY);
	r = read(coppy_from, buffer, 1024);
	ppaste_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (coppy_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(ppaste_to, buffer, r);
		if (ppaste_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(coppy_from, buffer, 1024);
		ppaste_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(coppy_from);
	close_file(ppaste_to);

	return (0);
}
