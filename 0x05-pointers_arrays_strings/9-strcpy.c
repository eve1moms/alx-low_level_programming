#include "main.h"
/**
* *_strcpy - it cp the string pointed to by src to buffer pointed to by dest
* @src:thr string
* @dest: the string
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	}
	while (src[n] != '\0');
		return (dest);
}
