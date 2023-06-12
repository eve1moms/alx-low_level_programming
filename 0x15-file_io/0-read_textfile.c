#include"main.h"
/**
 * read_textfile- function that Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return:  number of letters it could read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;/*file descripter*/
	ssize_t w;/* w = write */
	ssize_t t;/* t = read */

	if (!filename)
	{
		return (0);
	}
	/* openiing file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*storing in buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	t = read(fd, buffer, letters);
	if (t == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* printing it out writing */
	w = write(STDOUT_FILENO, buffer, t);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (t);
}
