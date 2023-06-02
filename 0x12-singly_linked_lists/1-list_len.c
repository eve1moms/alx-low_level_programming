#include "lists.h"
/**
* list_len - function that returns the number of
* elements in a linked list_t list
* @h: pointer to list_t list
* Return: number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
