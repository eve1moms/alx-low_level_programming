#include "lists.h"
/**
 * pop_listint - function that deletes the headnode
 * of inked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n), if list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;
	return (number);
}
