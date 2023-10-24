#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *next, *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
