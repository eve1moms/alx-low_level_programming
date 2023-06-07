#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, else NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat = head;
	listint_t *mouse = head;

	if (!head)
	return (NULL);

	while (cat && mouse && mouse->next)
	{
	mouse = mouse->next->next;
	cat = cat->next;
	if (mouse == cat)
	{
		cat = head;
		while (cat != mouse)
		{
			cat = cat->next;
			mouse = mouse->next;
		}
		return (mouse);
	}
	}
	return (NULL);
}
