#include"main.h"
/**
* _realloc - reallocates a memory block using malloc and free
* @old_size: the size, in bytes, of the allocated space for ptr
* @ptr: pointer to the memory previously allocated with a call to malloc
* @new_size: new size, in bytes of the new memory block
* @old_size: the size, in bytes, of the allocated space for ptr
* Return: pointer to the newly allocated block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (p = 0; p < new_size; p++)
			ptr1[p] = old_ptr[p];
	}
	if (new_size > old_size)
	{
		for (p = 0; p < old_size; p++)
			ptr1[p] = (old_ptr[p]);
	}
	free(ptr);
	return (ptr1);
}
