#include "main.h"
/**
* *cap_string - function that capitalizes all words of a string
* @p; pointer to string
* Return: pointer to p
*/
char *cap_string(char *p)
{
	int c = 0;/* thestring count scans through the string*/

	while (p[c] != '\0')
	{
		if (p[0] >= 'a' && p[0] <= 'z')
		{
		/* if next character after count is a char, capitalise it*/
			p[0] = p[0] - 32;
		}
		if (p[c] == ' ' || p[c] == '\t' || p[c] == '\n' || p[c] == ',' || p[c] == ';'
		|| p[c] == '.' || p[c] == '"' || p[c] == '(' || p[c] == ')' || p[c] == '!'
		|| p[c] == '?' || p[c] == '{' || p[c] == '}')
		{
			if (p[c + 1] >= 'a' && p[c + 1] <= 'z')
			{
				p[c + 1] = p[c + 1] - 32;
			}
		}
		c++;
	}
	return (p);
}
