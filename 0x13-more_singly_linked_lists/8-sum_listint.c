#include "lists.h"
/**
 * sum_listint - function that calculates the
 *sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum, if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
	sum += temporary->n;
	temporary = temporary->next;
	}

	return (sum);
}
