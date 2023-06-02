#include "lists.h"

/**
* print_list - function that psints elements of list
* @h: pointer to the lists_t to print
* Return: no of nodes
*/
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
