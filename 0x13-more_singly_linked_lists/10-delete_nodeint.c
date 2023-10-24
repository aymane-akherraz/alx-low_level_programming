#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list
 * @head: A pointer to listint_t
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *node;
	unsigned int i = 0;

	ptr = *head;
	while (ptr != NULL)
	{
		if (index == 0)
		{
			*head = ptr->next;
			free(ptr);
			return (1);
		}
		if (i == (index - 1))
		{
			node = ptr->next;
			ptr->next = node->next;
			free(node);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
