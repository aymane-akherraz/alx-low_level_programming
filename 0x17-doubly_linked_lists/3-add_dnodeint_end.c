#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head of the list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head)
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;

		new->prev = ptr;
		ptr->next = new;
	}
	else
	{
		new->prev = *head;
		*head = new;
	}
	return (new);
}
