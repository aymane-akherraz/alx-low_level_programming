#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the list
 *
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
