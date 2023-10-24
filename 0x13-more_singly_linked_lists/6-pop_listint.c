#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: A pointer to listint_t
 * Return: 0 if the linked list is empty otherwise the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	ptr = *head;
	n = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;

	return (n);
}
