#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of
 * a dlistint_t linked list
 * @head: A pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (!head || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	else
	{
		ptr = *head;
		while (ptr)
		{
			if (i == index)
			{
				ptr->prev->next = ptr->next;
				if (ptr->next)
					ptr->next->prev = ptr->prev;
				free(ptr);
				return (1);
			}
			ptr = ptr->next;
			i++;
		}
		return (-1);
	}
}
