#include "main.h"
/**
 * create_file - Creates A File.
 * @filename: A pointer TO Name of File being create.
 * @text_content: ponter 2 Contents of File
 * Return: If the function Fails -1 else  1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)/*Checks if File has A name*/
	return (-1);

	if (text_content != NULL)/* Checks is File has content */
	{
		for (length = 0; text_content[length];)
			length++;/*Calculates Length of Text_content*/
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);
/*Opens file, gives it Permission if it Exists it Erases it */

	if (fd == -1 || w == -1)/*if File Cant be Opened or Nothing Writen in it*/
	return (-1);
	close(fd);/*Else*/
	return (1);
}
