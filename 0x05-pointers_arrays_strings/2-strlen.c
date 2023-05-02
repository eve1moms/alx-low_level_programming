#include "main.h"
/**
* _strlen - prints length of a string
* @s: the string
* Return: the length of a string
*/

int _strlen(char *s)
{
	int n;

	n = 0;

	for (; *s++;)
		n++;
	return (n);
}

