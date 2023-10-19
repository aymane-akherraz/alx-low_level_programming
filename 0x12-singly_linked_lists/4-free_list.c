#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: A pointer to the list to be freed
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
