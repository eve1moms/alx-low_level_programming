#include "main.h"
#include <stdlib.h>
/**
* argstostr - function that concatenates all the arguments of your program
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int n, m, o = 0, p = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
			p++;
	}
	p += ac;
	str = malloc(sizeof(char) * p + 1);

	if (str == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			str[o] = av[n][m];
			o++;
		}
	if (str[o] == '\0')
		str[o++] = '\n';
	}
	return (str);
}
