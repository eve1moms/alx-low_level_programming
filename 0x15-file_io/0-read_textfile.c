#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- opens a file, reads its contents,
 * prints it out on screen(STDOUT), the closes it.
 * @filename: file to be read
 * @letters: number of letters to be read fom the file
 * Return: w- actual number of bytes read and printed
 * 0 when function is unsuccessful or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;/*w=write*/
	ssize_t t;/*t=read*/

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
