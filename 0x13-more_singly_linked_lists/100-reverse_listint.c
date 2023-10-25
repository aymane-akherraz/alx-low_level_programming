#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to listint_t
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = tmp;
	}
	*head = ptr;
	return (ptr);
}
