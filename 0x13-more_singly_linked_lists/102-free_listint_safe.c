#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t n = 0;

	while (*h)
	{
		if (*h > (*h)->next)
		{
			next = (*h)->next;
			free(*h);
			n++;
			*h = next;
		}
		else
		{
			free(*h);
			n++;
			*h = NULL;
		}
	}
	h = NULL;
	return (n);
}
