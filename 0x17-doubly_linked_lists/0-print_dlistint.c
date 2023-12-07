#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: A pointer to the head of the list
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
