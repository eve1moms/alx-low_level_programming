#include "function_pointers.h"
/**
* int_index - function that searches for an integer.
* @array: the array
* @cmp: pointer to function
* @size: size of thr arrays
* Return: index of the first element for which the
* cmp function does not return 0
* If no element matches, return -1
* If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
