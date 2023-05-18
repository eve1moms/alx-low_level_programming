#include "main.h"
/**
* array_range - function that creates an array of integers
* @max: maximum range of values
* @min: min no of values stored
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *a, p, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (p = 0; min <= max; p++)
		a[p] = min++;
	return (a);
}
