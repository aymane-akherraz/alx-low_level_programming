#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: A pointer to listint_t
 * Return: n the number of elements in listint_t
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
