#include "main.h"
/**
* _memcpy - function that copies memory area
* @dest: detination to memeory area
* @src: source from memory are
* @n: function that  copies
* Return: pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
