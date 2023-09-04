#include "main.h"
/**
 * append_text_to_file - Appends txt at END of File.
 * @filename: Pointer to Name Of File.
 * @text_content: Pointer 2 the Text 2 adda at the end of the file
 * Return: If Filename is NULL return -1.
 * or The File doesn't Exist/ user Lacks write permissions return -1,
 * else return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
	return (-1);

	close(o);

	return (1);
}
