#include "main.h"
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: it allocates memory to arrray
* @size:allocates size of bytes
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (n = 0; n < (nmemb = size); n++)
		a[n] = 0;
	return (a);
}
