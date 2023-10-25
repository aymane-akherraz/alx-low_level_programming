#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f = NULL;

	while (head && (head->next))
	{
		if (head->n == ((head->next->n) + 1))
		{
			if (f == NULL)
				f = head;
		}
		else
			f = NULL;

		head = head->next;

		if ((head->next) == f && f != NULL)
			return (f);
	}
	return (NULL);
}
