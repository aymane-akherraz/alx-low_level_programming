#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str);

/**
 * new_dog - Creates a new dog.
 * @name: A pointer to the given name
 * @age: the given age
 * @owner: A pointer to the given owner
 * Return: NULL if the function fails, a pointer to the new dog otherwise
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		d->name = _strdup(name);
		d->age = age;
		d->owner = _strdup(owner);

		if (d->name == NULL || d->owner == NULL || d->age == 0)
		{
			free(d);
			return (NULL);
		}
		return (d);
	}
	free(d);
	return (NULL);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: A pointer to the given string
 * Return: NULL if str = NULL or if insufficient memory was available,
 * otherwise a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *d;
	int i, l;

	if (str != NULL)
	{
		l = 0;
		while (str[l] != '\0')
			l++;

		d = malloc(sizeof(char) * (l + 1));
		if (d != NULL)
		{
			for (i = 0; i < l; i++)
				d[i] = str[i];

			d[i] = '\0';
			return (d);
		}
	}
	return (NULL);
}
