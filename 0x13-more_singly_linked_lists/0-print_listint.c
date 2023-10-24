#include "lists.h"

/**
 * print_listint - Prints all the elements of the list
 * @h: A pointer to the start of the list
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
