#include"main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 on success else -1, if filename is null
 * return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w, len;

	if (filename == NULL)
		return (-1);
/*opening in append mode*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = strlen(text_content);
	/* write a text to the file */
	w = write(fd, text_content, len);
	if (w == -1 || !(w == len))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
