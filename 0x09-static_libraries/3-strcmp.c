#include "main.h"
/**
* _strcmp - function that compares two strings
* @s1: pointer to string 1
* @s2: pointer to string 2
* Return: value less than 0 if string is less than other,value greater than 0
*/
int _strcmp(char *s1, char *s2)
{
	int c = 0, d;/* c = counter, d = diffrence between the compared values */

	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}
	d = s1[c] - s2[c];
	return (d);
}
