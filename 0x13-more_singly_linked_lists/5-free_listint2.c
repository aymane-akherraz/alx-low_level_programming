#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	head = NULL;
}
