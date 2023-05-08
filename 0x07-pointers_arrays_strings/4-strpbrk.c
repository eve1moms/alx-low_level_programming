#include "main.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes
* @accept: bytes to be searched for
* @s: the string to be searched
* Return:for matched set, pointer to matched byte else  NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i; /* i = index*/

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
