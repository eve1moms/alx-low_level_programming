#include "main.h"
/**
 * malloc_checked - afunction that allocates memory using malloc
 * if the function fails it should cause normal process
 * termination with a status value of 98
osk * @b: the allocated memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit (98);
	return(n);
}
