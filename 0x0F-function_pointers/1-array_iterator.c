#include "function_pointers.h"
/**
* array_iterator -  function that executes a function given
* as a parameter on each element of an array
* @array: the array
* @size: size of array
* @action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;
	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
