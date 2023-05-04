#include "main.h"
/**
* *leet - function that encodes a string into 1337
* @p: pointer to string
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* Return: pointer to p
*/
char *leet(char *p)
{
	int s = 0, l;/* s = string length, l = leet count*/
	char ll[] = "aAeEoOtTlL"; /* ll = leet letters*/
	char ln[] = "4433007711"; /* ln = leet numbers*/

	while (p[s] != '\0')
	{
		l = 0;
		while (l < 10)
		{
			if (ll[l] == p[s])
			{
				p[s] = ln[l];
			}
			l++;
		}
		s++;
	}
	return (p);
}
