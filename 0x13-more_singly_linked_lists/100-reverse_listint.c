#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to listint_t
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *tmp = NULL;

	ptr = *head;
	tmp = (*head)->next;

	if (tmp == NULL || *head == NULL)
		return (*head);

	(*head)->next = NULL;
	*head = tmp;
	if (tmp->next != NULL)
	{
		tmp = tmp->next;
		(*head)->next = ptr;

		while (tmp != NULL)
		{
			ptr = tmp->next;
			tmp->next = (*head);
			(*head) = tmp;
			tmp = ptr;
		}
	}
	return (*head);
}
