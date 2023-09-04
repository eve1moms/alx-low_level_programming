#include "main.h"
/**
 * create_file - Creates A File.
 * @filename: A pointer TO Name of File being create.
 * @text_content: Pointer 2 Contents of File
 * Return: If the Fnction Fails -1 else  1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)/*SEES if File HAS name*/
	return (-1);

	if (text_content != NULL)/* SEES is File HAS content */
	{
		for (length = 0; text_content[length];)
			length++;/*Callculates Length of Text_content*/
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);
/*Opens File, give it Permission, If it Exists it Erases it */

	if (fd == -1 || w == -1)
	return (-1);
	close(fd);/*Else*/
	return (1);
}
