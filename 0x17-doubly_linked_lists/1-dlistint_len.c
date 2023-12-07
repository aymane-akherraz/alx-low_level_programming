#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: A pointer to the head of the list
 *
 * Return: the number of elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
