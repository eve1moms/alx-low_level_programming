#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a linked list
 * @head: pointer to the first node on list
 * @n: data to insert on that new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *brand_new;

	brand_new = malloc(sizeof(listint_t));
	if (!brand_new)
		return (NULL);

	brand_new->n = n;
	brand_new->next = *head;
	*head = brand_new;

	return (brand_new);
}
