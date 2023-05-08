#include "main.h"
/**
* _strstr - function that locates a substring.
* @haystack: the string to be searched
* @needle: the substring to be located
* Return: pointer to bgening if substring locate otherwise NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i; /* i = index*/

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
