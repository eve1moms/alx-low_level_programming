#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *brand_new;
	listint_t *temp = *head;

	brand_new = malloc(sizeof(listint_t));
	if (!brand_new || !head)
		return (NULL);
	brand_new->n = n;
	brand_new->next = NULL;

	if (idx == 0)
	{
		brand_new->next = *head;
		*head = brand_new;
		return (brand_new);
	}

	for (p = 0; temp && p < idx; p++)
	{
		if (p == idx - 1)
		{
			brand_new->next = temp->next;
			temp->next = brand_new;
			return (brand_new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
