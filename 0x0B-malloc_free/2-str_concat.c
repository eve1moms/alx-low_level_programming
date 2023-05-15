#include "main.h"
#include<stdlib.h>
/**
* get_str_length - gets the lengh of the string
* @str: string whose length is to be found
* Return: int value of the sring
*/
int get_str_length(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	return (n + 1);
}
/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: contents of s1 followed by s2 and NULL terminated
* else NULL
*/
char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, n, m;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_s1 = get_str_length(s1);
	size_s2 = get_str_length(s2);

	ptr = (char *)malloc(((size_s1 + size_s2) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		ptr[n] = s1[n];
	for (m = 0; s2[m] != '\0'; m++, n++)
		ptr[n] = s2[m];
	ptr[n] = '\0';
	return (ptr);
}
