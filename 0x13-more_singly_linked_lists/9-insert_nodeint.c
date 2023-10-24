#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @idx: the index of the list where the new node should be added,
 * index starts at 0
 * @head: A pointer to listint_t
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	ptr = *head;
	while (ptr != NULL)
	{
		if (idx == 0)
		{
			new->next = ptr;
			*head = new;
			return (new);
		}
		if (i == (idx - 1))
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
