#include "lists.h"
int _strlen(const char *s);

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the list
 * @str: A pointer to the given string
 *
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
	}
	return (new);
}
/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the given string
 * Return: The length of the given string.
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
