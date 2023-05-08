#include "main.h"
/**
* *_memset -  function that fills memory with a constant byte
* @s: the memory
* @b: character to be copied
* @n: number of times to copy the char b
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
