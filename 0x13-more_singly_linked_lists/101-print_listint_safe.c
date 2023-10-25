#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: the number of nodes in the list or 98 if the it fails
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		n++;
		if (head > head->next)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (n);
}
