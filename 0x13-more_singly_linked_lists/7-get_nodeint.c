#include "lists.h"
/**
 * get_nodeint_at_index - function that return index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temporary = head;

	while (temporary && p < index)
	{
	temporary = temporary->next;
	p++;
	}
	return (temporary ? temporary : NULL);
}
