#include "main.h"
/**
* *_strncpy - function that copies a string
* @src: source string
* @dest: destination string
* @n: number of bytes to be used
* Return: destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c; /* c= count of bytes*/

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
	{
		dest[c] = '\0';
	}
	return (dest);
}
