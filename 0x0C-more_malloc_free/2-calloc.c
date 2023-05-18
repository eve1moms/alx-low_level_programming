#include "main.h"
/**
* _memory - fills memory with constant byte
* @s: memosry to be filled
* @b: chaearcter to copy
* @n: times to copy b
* Return: pointer to the memory area
*/
char *_memory(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
	return (s);
}
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: it allocates memory to arrray
* @size:allocates size of bytes
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	_memory(a, 0, nmemb * size);
	return (a);
}
