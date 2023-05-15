#include "main.h"
#include  <stdlib.h>
/**
* create_array - create an array of size size and assign chr c
* @size: the size of the array
* @c: char to assign
* Return: pointer  to array, NULL if fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int count = 0;

	if (size == 0)
		return (NULL);
	ptr = (char *)(malloc(size * sizeof(char)));

	if (!ptr)
		return (NULL);
	while (count < size)
	{
		ptr[count] = c;
		count++;
	}
	return (ptr);
}
