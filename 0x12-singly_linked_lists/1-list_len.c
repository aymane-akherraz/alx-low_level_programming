#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: A pointer to the linked list
 *
 * Return: the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
