#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked
 * list
 * @head: A pointer to the head of the list
 *
 * Return: the sum of all the data (n) or 0 f the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
