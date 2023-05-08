#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring.
* @accept: the prefrix to be measured
* @s: the string
* Return:no of bytes in s which consist of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0; /* b = bytes*/
	int i; /* i = index*/

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
