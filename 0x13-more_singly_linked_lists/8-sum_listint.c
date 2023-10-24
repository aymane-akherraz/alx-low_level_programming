#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: A pointer to listint_t
 * Return: 0 if the list is empty or the sum of all the data (n)
*/
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
