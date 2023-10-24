#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: A pointer to listint_t
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list or Null if the node
 * does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
