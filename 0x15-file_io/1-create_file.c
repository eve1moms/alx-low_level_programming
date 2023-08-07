#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file being create.
 * @text_content: ponter to the contents of the file
 * Return: If the function fails -1 else  1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)/*checks if the file has a file name*/
	return (-1);

	if (text_content != NULL)/* checks is file has content */
	{
		for (length = 0; text_content[length];)
			length++;/*calculates length of text_content*/
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);
/*opens file, gives it permission if it exists it erases it */

	if (fd == -1 || w == -1)/*if file cant be opened or nothing writen in it*/
	return (-1);
	close(fd);/*else*/
	return (1);
}
