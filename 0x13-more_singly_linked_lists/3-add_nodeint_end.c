#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *brand_new;
	listint_t *temp = *head;

	brand_new = malloc(sizeof(listint_t));
	if (!brand_new)
		return (NULL);

	brand_new->n = n;
	brand_new->next = NULL;

	if (*head == NULL)
	{
		*head = brand_new;
		return (brand_new);
	}

	while (temp->next)
	temp = temp->next;
	temp->next = brand_new;

	return (brand_new);
}
