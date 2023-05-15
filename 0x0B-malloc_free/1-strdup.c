#include "main.h"
#include <stdlib.h>
/**
* _strdup - retuens pointer to a newly allocated spae in memory
* containing a copy of the string given as a parameter
* @str: string to copy
* Return: pointer to duplicate sring if success else NULL if str = NULL
*/
char *_strdup(char *str)
{
	int size, n;

	char *ptr;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
 /* determining the legth size of the string*/
	ptr = (char *)malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
/* copying contents of @str to ptr the new array*/
		ptr[n] = str[n];
	ptr[n] = '\0';

	return (ptr);
}
