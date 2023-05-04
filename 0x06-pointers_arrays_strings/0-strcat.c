#include "main.h"
/**
* *_strcat -  function that concatenates two strings
* @src: source string
* @dest: destination string
* Return: pointer to destination
*/
char *_strcat(char *dest, char *src)
{
	int l = 0;/* length of string*/
	int z;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (z = 0; src[z] != '\0'; z++, l++)
	{
		dest[l] = src[z];
	}
	dest[l] = '\0';
	return (dest);
}
