#include "main.h"
/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @p: pointer to the string
* Return: the pointer to uppercase string
*/

char *string_toupper(char *p)
{
	int l = 0; /* leghth of string*/

	while (p[l] != '\0')
	{
		if (p[l] >= 'a' && p[l] <= 'z')
		{
			p[l] = p[l] - 32;
		}
		l++;
	}
	return (p);
}
