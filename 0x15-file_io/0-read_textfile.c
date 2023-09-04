#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Opens file reads its contents
 * Prints it on Screen(STDOUT), the closes it.
 * @filename: File toRead
 * @letters: num of Letters to Read from  file
 * Return: w- Actual num of Bytes Read and printed
 * 0 IF  unsuccessful or filename is NULL.
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
