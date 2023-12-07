#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to the head of the list
 * @idx: the index of the node, starting from 0
 * @n: interger
 *
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	ptr = *h;
	while (ptr)
	{
		if (i == idx)
		{
			ptr->prev->next = new;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev = new;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
