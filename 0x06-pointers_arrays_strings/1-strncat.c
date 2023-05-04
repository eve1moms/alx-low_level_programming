#include "main.h"
/**
* *_strncat -  function that concatenates two strings.
* @src: source string
* @dest: destination string
* @n: number of bytes to be concatenated
* Return: destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int l = 0; /* length of destination string*/
	int z;/* counter of n bytes of src to be concatenated*/

	while (dest[l] != '\0')
	{
		l++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, l++)
	{
		dest[l] = src[z];
	}
	dest[l] = '\0';
	return (dest);
}
